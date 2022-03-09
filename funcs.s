//write your ARM code here
	.global _Z3dotPmS_i
_Z3dotPmS_i:
	mov x6,0
1:
	ldr	x3,[x0]
	ldr	x4,[x1]
	mul x5,x4,x3
	add x6,x6,x5
	add x0,x0,8
	add x1,x1,8
	sub x2,x2,1
	cmp x2,0
	bgt 1b
	mov x0,x6
	ret
	
	
	.global _Z4dot1PiS_i

_Z4dot1PiS_i:
	mov w6,0
1:                                                                                                                                        
	ldrsw	w3,[x0]
	ldrsw	w4,[x1]	
	mul w5,w4,w3
	add w6,w6,w5
	add x0,x0,4
	add x1,x1,4
	sub w2,w2,1
	cmp w2,1
	fcvt.f32.f64 x0,w6 // scvt.s32.s64
	bgt 1b
	ret
	
	
	.global _Z5hypotdd //check for correct type
_Z5hypotdd:
	fmul d2,d0,d0
	fmul d3,d1,d1
	fadd d2,d2,d3
	fsqrt	d2,d2
	fmov	d0,d2
	ret
	
	.global _Z9quadraticdddd
_Z9quadraticdddd: //a=d0,b=d1,c=d2,x=d3
	
	fmul d4,d0,d3 //ax term
	fadd d5,d4,d1 //(ax+b)
	fmul d6,d5,d4 //(ax+b)*x
	fadd d7,d6,d2// (ax+b)*x +c
	fsqrt d7,d7
	fmov d0,d7
	ret
	
