
global ft_strcmp

ft_strcmp:
	mov rcx, rdi	; char *rcx = first arg
	mov rdx, rsi	; char *rdx = second arg
	mov eax, 0		; int out = 0

	cmp rcx, 0
	je .return

	cmp rdx, 0
	je .return

.strcmp_loop:
	mov r8b, [rcx]
	mov r9b, [rdx]

	; Get difference between characters and return if they are different
	sub r8b, r9b
	movsx eax, r8b
	cmp eax, 0
	jne .return

	; Check if end of string reached and return if so
	cmp r9b, 0
	je .return

	; Increment string positions
	inc rcx
	inc rdx

	; loop back
	jmp .strcmp_loop

.return:
	ret
