	.text
	.abicalls
	.option	pic0
	.section	.mdebug.abi32,"",@progbits
	.nan	legacy
	.text
	.file	"test.c"
	.globl	main                    # -- Begin function main
	.p2align	2
	.type	main,@function
	.set	nomicromips
	.set	nomips16
	.ent	main
main:                                   # @main
	.frame	$fp,24,$ra
	.mask 	0xc0000000,-4
	.fmask	0x00000000,0
	.set	noreorder
	.set	nomacro
	.set	noat
# %bb.0:                                # %entry
	addiu	$sp, $sp, -24
	sw	$ra, 20($sp)            # 4-byte Folded Spill
	sw	$fp, 16($sp)            # 4-byte Folded Spill
	move	$fp, $sp
	sw	$zero, 12($fp)
	addiu	$1, $zero, 5
	sw	$1, 8($fp)
	addiu	$1, $zero, 6
	sw	$1, 4($fp)
	lw	$1, 8($fp)
	lw	$2, 4($fp)
	addu	$1, $1, $2
	sw	$1, 0($fp)
	lw	$2, 0($fp)
	move	$sp, $fp
	lw	$fp, 16($sp)            # 4-byte Folded Reload
	lw	$ra, 20($sp)            # 4-byte Folded Reload
	addiu	$sp, $sp, 24
	jr	$ra
	nop
	.set	at
	.set	macro
	.set	reorder
	.end	main
$func_end0:
	.size	main, ($func_end0)-main
                                        # -- End function
	.ident	"clang version 11.0.0 (https://github.com/yehudahs/llvm-project.git 482b4e522a7ffd81d5107e43eea6c34df46142ea)"
	.section	".note.GNU-stack","",@progbits
	.addrsig
	.text
