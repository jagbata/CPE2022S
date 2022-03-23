	.global _Z3dotPiS_i
_Z3dotPiS_i:
	mov x6,0
1:                                                                                                                                        
	ldrsw	x3,[x0]
	ldrsw	x4,[x1]	
	mul x5,x4,x3
	add x6,x6,x5
	add x0,x0,4
	add x1,x1,4
	sub x2,x2,1
	cmp x2,0
	bgt 1b
	mov x0,x6
	ret// write your asm here
	
	
	.global _Z1fmmm
_Z1fmmm:
	mov x3,1
	mov x4,1
	mov x5,0
	mov x6,1
	mov x7,3
	mov x8,2
	mul x3,x0,x7
	mul	x4,x1,x8
	add	x5,x3,x4
	mul x6,x5,x2
	mov x0,x6
	ret

	.global _Z12order_of_opsmmm
_Z12order_of_opsmmm:
	mov x3,1
	mov x4,0
	mul x3,x1,x2
	add x4,x3,x0
	mov x0,x4
	ret

	.global _Z12count3nplus1m
_Z12count3nplus1m:
	mov x1,0
  mov x3,3
  mov x4,1
  mov x5,0
loop:
  cmp x0,0b00000001
  ble exit
  and x2, x0, 0b00000001
  cmp x2,0b00000001
  beq odd
  bne even 
	
odd: 
	mul x4,x0,x3
  add x5,x4,1
  add x1,x1,1
  b loop
even: 
  mov x0,x0,ASR 1
  add x1,x1,1
  b loop
exit:
	mov  x0,x1
	ret
	
	
	.global _Z11double_eachPKji
_Z11double_eachPKji:
	mov x4,2
	mov x5,4
	mov x6,1
1:
	ldr x2,[x0]
	mul x3,x2,x4
	str x3,[x0]	
	//mov x8,x3
	add x0,x0,8	
	sub x1,x1,x6
	cmp x1,0
	bgt 1b
	ret
	
	/*83
	// 1010011
	// 1010000
	1110000
	1010011


	
	.global _Z9clearlow4m
_Z9clearlow4m:
	mov x1, 0xFFFFFFF0
	AND x2,x1,x0
	mov x0,x2
	ret 
	
	.global _Z10setbits5_9m
_Z10setbits5_9m:
	mov x1,0x000003E0
	ORR x2,x1,x0
	mov x0,x2
	ret
	
	.global _Z13togglebits4_9m
_Z13togglebits4_9m:
	mov x1,0x00000000000003F0
	eor x2,x1,x0
	mov x0,x2
	ret
	


Z12count3nplus1m:
	mov x1, 0 // counter
loop:
	cmp x0, 1
	ble exit
	and x2, x0, 1 // x2 = x0 && 1
	cmp x2, 1
	beq odd
	bne even
even:
	mov x0, x0, ASR 1 // x1/2
	add x1, x1, 1
	b loop
odd:
	mov x3, 3
	mul x0, x3, x0 // x3 = x3 * x0 = 3 * x0
	add x0, x0, 1 // x0 = x0 + 1
	add x1, x1, 1
	b loop
exit:
	mov x0, x1
	ret 	