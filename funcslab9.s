	// write your arm code here
	.global _Z9factoriali
_Z9factoriali:
	mov x1,1
loop:	
	mul x1,x0,x1
	sub x0,x0,1
	cmp x0,1
	bge loop
	mov x0,x1
	ret 
	
	.global _Z8evenProdii
_Z8evenProdii:
	mov x3,1
	mov x4,x0
loop1:	
	cmp x4,x1
	bge exit
	and x2,x0,1
	cmp x2,0
	beq even
	bne odd
	add x4,x4,1
	cmp x4,x1
	bge exit
	mov x0,x2
	ret
odd:
	add x2,x2,1
	b loop1	
even:
	mov x5,0
	mul x3,x2,x3
	add x2,x2,1
	add x5,x5,x3
	b loop1
	
exit:
	mov x0,x2
	ret

