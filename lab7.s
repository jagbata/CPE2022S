	.arch armv8-a
	.file	"lab7.cc"
	.text
	.align	2
	.p2align 4,,11
	.global	_Z3dotPmS_i
	.type	_Z3dotPmS_i, %function
_Z3dotPmS_i:
.LFB1815:
	.cfi_startproc
	mov	x7, x0
	tbnz	w2, #31, .L5
	sxtw	x6, w2
	mov	x0, 1
	mov	x5, x6
	.p2align 3,,7
.L4:
	ldr	x4, [x7, x5, lsl 3]
	mov	x2, x6
	.p2align 3,,7
.L3:
	ldr	x3, [x1, x2, lsl 3]
	sub	x2, x2, #1
	madd	x0, x4, x3, x0
	tbz	w2, #31, .L3
	sub	x5, x5, #1
	tbz	w5, #31, .L4
	ret
.L5:
	mov	x0, 1
	ret
	.cfi_endproc
.LFE1815:
	.size	_Z3dotPmS_i, .-_Z3dotPmS_i
	.section	.text.startup,"ax",@progbits
	.align	2
	.p2align 4,,11
	.global	main
	.type	main, %function
main:
.LFB1816:
	.cfi_startproc
	adrp	x3, .LANCHOR0
	add	x3, x3, :lo12:.LANCHOR0
	stp	x29, x30, [sp, -96]!
	.cfi_def_cfa_offset 96
	.cfi_offset 29, -96
	.cfi_offset 30, -88
	mov	w2, 4
	mov	x29, sp
	ld1	{v2.16b - v3.16b}, [x3], 32
	add	x1, sp, 64
	add	x0, sp, 32
	ld1	{v0.16b - v1.16b}, [x3]
	st1	{v2.16b - v3.16b}, [x0]
	st1	{v0.16b - v1.16b}, [x1]
	bl	_Z3dotPmS_i
	adrp	x2, :got:_ZSt4cout
	mov	x1, x0
	ldr	x0, [x2, #:got_lo12:_ZSt4cout]
	bl	_ZNSo9_M_insertImEERSoT_
	mov	w3, 10
	add	x1, sp, 31
	mov	x2, 1
	strb	w3, [sp, 31]
	bl	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l
	mov	w0, 0
	ldp	x29, x30, [sp], 96
	.cfi_restore 30
	.cfi_restore 29
	.cfi_def_cfa_offset 0
	ret
	.cfi_endproc
.LFE1816:
	.size	main, .-main
	.align	2
	.p2align 4,,11
	.type	_GLOBAL__sub_I__Z3dotPmS_i, %function
_GLOBAL__sub_I__Z3dotPmS_i:
.LFB2311:
	.cfi_startproc
	stp	x29, x30, [sp, -32]!
	.cfi_def_cfa_offset 32
	.cfi_offset 29, -32
	.cfi_offset 30, -24
	mov	x29, sp
	str	x19, [sp, 16]
	.cfi_offset 19, -16
	adrp	x19, .LANCHOR1
	add	x19, x19, :lo12:.LANCHOR1
	mov	x0, x19
	bl	_ZNSt8ios_base4InitC1Ev
	mov	x1, x19
	adrp	x0, :got:_ZNSt8ios_base4InitD1Ev
	ldr	x19, [sp, 16]
	adrp	x2, __dso_handle
	ldp	x29, x30, [sp], 32
	.cfi_restore 30
	.cfi_restore 29
	.cfi_restore 19
	.cfi_def_cfa_offset 0
	add	x2, x2, :lo12:__dso_handle
	ldr	x0, [x0, #:got_lo12:_ZNSt8ios_base4InitD1Ev]
	b	__cxa_atexit
	.cfi_endproc
.LFE2311:
	.size	_GLOBAL__sub_I__Z3dotPmS_i, .-_GLOBAL__sub_I__Z3dotPmS_i
	.section	.init_array,"aw"
	.align	3
	.xword	_GLOBAL__sub_I__Z3dotPmS_i
	.section	.rodata
	.align	3
	.set	.LANCHOR0,. + 0
.LC0:
	.xword	2
	.xword	3
	.xword	2
	.xword	5
.LC1:
	.xword	3
	.xword	2
	.xword	3
	.xword	2
	.bss
	.align	3
	.set	.LANCHOR1,. + 0
	.type	_ZStL8__ioinit, %object
	.size	_ZStL8__ioinit, 1
_ZStL8__ioinit:
	.zero	1
	.hidden	__dso_handle
	.ident	"GCC: (Debian 10.2.1-6) 10.2.1 20210110"
	.section	.note.GNU-stack,"",@progbits
