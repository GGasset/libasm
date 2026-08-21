
global ft_strlen

ft_strlen:
	mov rcx, rdi ; Move input string pointer to %rcx
	mov rax, 0 ; Load 0 to general purpose 32bit register %ebx, %ebx is the length of the string (return value)

	cmp rcx, 0 ; Check if first argument is 0, str is null
	je .return ; Jump to return label if %rdi is 0

.strlen_loop:
	mov dh, [rcx] ; Move value inside string pointer to %rax
	cmp dh, 0 ; Check if string char is 0
	je .return ; If string char is 0, return

	add rax, 1 ; Else, add 1 to length
	add rcx, 1 ; Increment string pointer by 1
	jmp .strlen_loop


.return:
	ret
