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
/*
	.global _Z8evenProdii
_Z8evenProdii:

loop1:
	cmp x0,x1
	bgt exit
	and	x4,x0,0x1
	cmp x4,1
	beq odd
	bne even
even:
	mov x5,0
	mov x6,1
	mul x3,x6,x0
	
	add	x5,x5,x3
	add x0,x0,1
	b loop1
 	
odd: 
	add x0,x0,1
	b loop1
exit:
	mov x0,x3
	ret
*/

	.global _Z8evenProdii
_Z8evenProdii:
	mov x2,1
loop1:
	and x3,x0,1
	cmp x3,1
	beq odd
even:
	mul x2,x2,x0
	add x0,x0,2
	cmp x0,x1
	ble even
	b exit
odd:
	add x0,x0,1
	b loop1
exit:
	mov x0,x2
	ret

