section .text
	global _ft_strlen

_ft_strlen:
	push	rcx
	xor		rcx, rcx
nxt:
	cmp		[rdi], byte 0
	jz		end
	inc		rcx
	inc		rdi
	jmp		nxt
end:
	mov		rax, rcx
	pop		rcx
	ret