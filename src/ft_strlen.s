section .text
	global _ft_strlen

_ft_strlen:
    push	rbp
	mov		rbp, rsp
	xor		rsi, rsi
	xor		rcx, rcx
loop:
	cmp		byte [rdi + rdi], 0
	jz		end
	inc		rcx
	jmp		loop
end:
	mov		rax, rcx
	leave
	ret