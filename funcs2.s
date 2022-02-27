// write your arm code below
	.global _Z3sumi
	

_Z3sumi:
	mov x1,0
	mov x2,0
loop:
	add x1,x1,1
	cmp x1,x0
	add x2,x1,x2
	bne loop
	mov x0,x2
	ret
	.global _Z5sumSqii
	
_Z5sumSqii:
	mov x2,x0
	mov x3,0
loop2:
	mul x0,x2,x2
	add x3,x0,x3
	cmp x2,x1
	add x2,x2,1
	bne loop2
	mov x0,x3
	ret
	
