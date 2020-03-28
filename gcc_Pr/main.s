	.file	"main.c"
	.text
	.globl	func
	.def	func;	.scl	2;	.type	32;	.endef
	.seh_proc	func
func:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movl	$3, %eax
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC0:
	.ascii "%d, %d\12\0"
	.text
	.globl	fun
	.def	fun;	.scl	2;	.type	32;	.endef
	.seh_proc	fun
fun:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	call	func
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	movl	$5, %r8d
	movl	%eax, %edx
	leaq	.LC0(%rip), %rcx
	call	printf
	nop
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (GNU) 9.3.0"
	.def	printf;	.scl	2;	.type	32;	.endef
