// Copyright 2009 The Go Authors. All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

// This file provides fast assembly versions of the routines in arith.go.

TEXT big·useAsm(SB),7,$0
	MOVB $1, 8(SP)
	RET


// ----------------------------------------------------------------------------
// Elementary operations on words

// func addWW_s(x, y, c Word) (z1, z0 Word)
// z1<<_W + z0 = x+y+c, with c == 0 or 1
TEXT big·addWW_s(SB),7,$0
	MOVQ a+0(FP), AX
	XORQ DX, DX
	ADDQ a+8(FP), AX
	ADCQ $0, DX
	ADDQ a+16(FP), AX
	ADCQ $0, DX
	MOVQ DX, a+24(FP)
	MOVQ AX, a+32(FP)
	RET


// func subWW_s(x, y, c Word) (z1, z0 Word)
// z1<<_W + z0 = x-y-c, with c == 0 or 1
TEXT big·subWW_s(SB),7,$0
	MOVQ a+0(FP), AX
	XORQ DX, DX
	SUBQ a+8(FP), AX
	ADCQ $0, DX
	SUBQ a+16(FP), AX
	ADCQ $0, DX
	MOVQ DX, a+24(FP)
	MOVQ AX, a+32(FP)
	RET


// func mulAddWWW_s(x, y, c Word) (z1, z0 Word)
// z1<<64 + z0 = x*y + c
//
TEXT big·mulAddWWW_s(SB),7,$0
	MOVQ a+0(FP), AX
	MULQ a+8(FP)
	ADDQ a+16(FP), AX
	ADCQ $0, DX
	MOVQ DX, a+24(FP)
	MOVQ AX, a+32(FP)
	RET


// func divWWW_s(x1, x0, y Word) (q, r Word)
// q = (x1<<64 + x0)/y + r
//
TEXT big·divWWW_s(SB),7,$0
	MOVQ a+0(FP), DX
	MOVQ a+8(FP), AX
	DIVQ a+16(FP)
	MOVQ AX, a+24(FP)
	MOVQ DX, a+32(FP)
	RET


// ----------------------------------------------------------------------------
// Elementary operations on vectors

// TODO(gri) - experiment with unrolled loops for faster execution

// func addVV_s(z, x, y *Word, n int) (c Word)
TEXT big·addVV_s(SB),7,$0
	MOVQ a+0(FP), R10	// z
	MOVQ a+8(FP), R8	// x
	MOVQ a+16(FP), R9	// y
	MOVL a+24(FP), R11	// n
	XORQ BX, BX			// i = 0
	XORQ DX, DX			// c = 0
	JMP E1

L1:	MOVQ (R8)(BX*8), AX
	RCRQ $1, DX
	ADCQ (R9)(BX*8), AX
	RCLQ $1, DX
	MOVQ AX, (R10)(BX*8)
	ADDL $1, BX			// i++

E1:	CMPQ BX, R11		// i < n
	JL L1

	MOVQ DX, a+32(FP)	// return c
	RET


// func subVV_s(z, x, y *Word, n int) (c Word)
// (same as addVV_s except for SBBQ instead of ADCQ and label names)
TEXT big·subVV_s(SB),7,$0
	MOVQ a+0(FP), R10	// z
	MOVQ a+8(FP), R8	// x
	MOVQ a+16(FP), R9	// y
	MOVL a+24(FP), R11	// n
	XORQ BX, BX			// i = 0
	XORQ DX, DX			// c = 0
	JMP E2

L2:	MOVQ (R8)(BX*8), AX
	RCRQ $1, DX
	SBBQ (R9)(BX*8), AX
	RCLQ $1, DX
	MOVQ AX, (R10)(BX*8)
	ADDL $1, BX			// i++

E2:	CMPQ BX, R11		// i < n
	JL L2

	MOVQ DX, a+32(FP)	// return c
	RET


// func addVW_s(z, x *Word, y Word, n int) (c Word)
TEXT big·addVW_s(SB),7,$0
	MOVQ a+0(FP), R10	// z
	MOVQ a+8(FP), R8	// x
	MOVQ a+16(FP), AX	// c = y
	MOVL a+24(FP), R11	// n
	XORQ BX, BX			// i = 0
	JMP E3

L3:	ADDQ (R8)(BX*8), AX
	MOVQ AX, (R10)(BX*8)
	RCLQ $1, AX
	ANDQ $1, AX
	ADDL $1, BX			// i++

E3:	CMPQ BX, R11		// i < n
	JL L3

	MOVQ AX, a+32(FP)	// return c
	RET


// func subVW_s(z, x *Word, y Word, n int) (c Word)
TEXT big·subVW_s(SB),7,$0
	MOVQ a+0(FP), R10	// z
	MOVQ a+8(FP), R8	// x
	MOVQ a+16(FP), AX	// c = y
	MOVL a+24(FP), R11	// n
	XORQ BX, BX			// i = 0
	JMP E4

L4:	MOVQ (R8)(BX*8), DX	// TODO(gri) is there a reverse SUBQ?
	SUBQ AX, DX
	MOVQ DX, (R10)(BX*8)
	RCLQ $1, AX
	ANDQ $1, AX
	ADDL $1, BX			// i++

E4:	CMPQ BX, R11		// i < n
	JL L4

	MOVQ AX, a+32(FP)	// return c
	RET


// func mulAddVWW_s(z, x *Word, y, r Word, n int) (c Word)
TEXT big·mulAddVWW_s(SB),7,$0
	MOVQ a+0(FP), R10	// z
	MOVQ a+8(FP), R8	// x
	MOVQ a+16(FP), R9	// y
	MOVQ a+24(FP), CX	// c = r
	MOVL a+32(FP), R11	// n
	XORQ BX, BX			// i = 0
	JMP E6

L6:	MOVQ (R8)(BX*8), AX
	MULQ R9
	ADDQ CX, AX
	ADCQ $0, DX
	MOVQ AX, (R10)(BX*8)
	MOVQ DX, CX
	ADDL $1, BX			// i++

E6:	CMPQ BX, R11		// i < n
	JL L6

	MOVQ CX, a+40(FP)	// return c
	RET


// divWVW_s(z* Word, xn Word, x *Word, y Word, n int) (r Word)
TEXT big·divWVW_s(SB),7,$0
	MOVQ a+0(FP), R10	// z
	MOVQ a+8(FP), DX	// r = xn
	MOVQ a+16(FP), R8	// x
	MOVQ a+24(FP), R9	// y
	MOVL a+32(FP), BX	// i = n
	JMP E7

L7:	MOVQ (R8)(BX*8), AX
	DIVQ R9
	MOVQ AX, (R10)(BX*8)

E7:	SUBL $1, BX			// i--
	JGE L7				// i >= 0

	MOVQ DX, a+40(FP)	// return r
	RET
