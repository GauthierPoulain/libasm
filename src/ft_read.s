extern	___error
section .text
	global _ft_read

_ft_read:
	mov		rax, 0x2000003
	syscall
	jc		err
	ret
err:
	mov		rdi, rax
	push	rdi
	call	___error
	pop		rdi
	mov		[rax], rdi
	mov		rax, -1
	ret