global	_ft_strcmp

_ft_strcmp:
loop:
	cmp		[rdi], byte 0
	je		end
	mov		al, byte [rsi]
	cmp		byte [rdi], al
	jne		end
	inc		rdi
	inc		rsi
	jmp		loop
end:
	movzx	rax, byte [rdi]
	movzx	rdi, byte [rsi]
	sub		rax, rdi
	ret