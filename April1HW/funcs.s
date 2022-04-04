	.global _Z4copyPjS_i
_Z4copyPjS_i:
1:
	ldr x4,[x1]
	str x4,[x0]
	sub x2,x2,#1
	add x1,x1,#4
	add x0,x0,#4
	cmp x2,0
	bgt 1b
	ret
