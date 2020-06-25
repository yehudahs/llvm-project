	.file	1 "test.c"
	.section .mdebug.abi32
	.previous
	.nan	legacy
	.module	fp=xx
	.module	nooddspreg
	.abicalls
	.text
	.align	2
	.globl	addu
	.set	nomips16
	.set	nomicromips
	.ent	addu
	.type	addu, @function
addu:
	.frame	$fp,16,$31		# vars= 8, regs= 1/0, args= 0, gp= 0
	.mask	0x40000000,-4
	.fmask	0x00000000,0
	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-16
	sw	$fp,12($sp)
	move	$fp,$sp
	li	$2,-5			# 0xfffffffffffffffb
	sh	$2,2($fp)
	li	$2,6			# 0x6
	sh	$2,4($fp)
	lhu	$3,2($fp)
	lhu	$2,4($fp)
	addu	$2,$3,$2
	sh	$2,6($fp)
	lhu	$2,6($fp)
	move	$sp,$fp
	lw	$fp,12($sp)
	addiu	$sp,$sp,16
	jr	$31
	nop

	.set	macro
	.set	reorder
	.end	addu
	.size	addu, .-addu
	.align	2
	.globl	add
	.set	nomips16
	.set	nomicromips
	.ent	add
	.type	add, @function
add:
	.frame	$fp,16,$31		# vars= 8, regs= 1/0, args= 0, gp= 0
	.mask	0x40000000,-4
	.fmask	0x00000000,0
	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-16
	sw	$fp,12($sp)
	move	$fp,$sp
	li	$2,-5			# 0xfffffffffffffffb
	sh	$2,2($fp)
	li	$2,6			# 0x6
	sh	$2,4($fp)
	lhu	$3,2($fp)
	lhu	$2,4($fp)
	addu	$2,$3,$2
	andi	$2,$2,0xffff
	sh	$2,6($fp)
	lh	$2,6($fp)
	move	$sp,$fp
	lw	$fp,12($sp)
	addiu	$sp,$sp,16
	jr	$31
	nop

	.set	macro
	.set	reorder
	.end	add
	.size	add, .-add
	.align	2
	.globl	main
	.set	nomips16
	.set	nomicromips
	.ent	main
	.type	main, @function
main:
	.frame	$fp,16,$31		# vars= 8, regs= 1/0, args= 0, gp= 0
	.mask	0x40000000,-4
	.fmask	0x00000000,0
	.set	noreorder
	.set	nomacro
	addiu	$sp,$sp,-16
	sw	$fp,12($sp)
	move	$fp,$sp
	li	$2,-5			# 0xfffffffffffffffb
	sh	$2,2($fp)
	li	$2,6			# 0x6
	sh	$2,4($fp)
	lhu	$3,2($fp)
	lhu	$2,4($fp)
	addu	$2,$3,$2
	andi	$2,$2,0xffff
	sh	$2,6($fp)
	lh	$2,6($fp)
	move	$sp,$fp
	lw	$fp,12($sp)
	addiu	$sp,$sp,16
	jr	$31
	nop

	.set	macro
	.set	reorder
	.end	main
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
