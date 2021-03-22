extern _malloc
extern ___error
extern _ft_strlen
extern _ft_strcpy
	global _ft_strdup

_ft_strdup:
	push	rdi
	call 	_ft_strlen
	inc		rax
	mov		rdi, rax
	call	_malloc
	cmp		rax, byte 0
	je		err
	mov		rdi, rax
	pop		rsi
	call	_ft_strcpy
	ret
err
	mov		rax, 0
	ret