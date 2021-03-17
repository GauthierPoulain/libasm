global	_ft_strlen

_ft_strlen:	
	push	rcx
	mov		rcx, 0
loop:
	cmp		[rdi + rcx], byte 0
	jz		end
	inc		rcx
	jmp		loop
end:
	mov		rax, rcx
	pop		rcx
	ret