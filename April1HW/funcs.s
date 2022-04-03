	.global _Z3copyPmS_i
_Z3copyPmS_i:
	mov x3,#0
	mov x5,2
1:
	ldr x4,[x0,x3]
	mul x4,x4,x5
	str x4,[x0,x3]
	add x3,x3,#1
	cmp x3,x2
	bne 1b
	ret
