
.section .text
ft_strlen:
	mov rdi, rax # Move input string pointer to %rax
	mov 0, ebx # Load 0 to general purpose 32bit register %ebx, %ebx is the length of the string (return value)

	cmp 0, rax # Check if first argument is 0, str is null
	je .return # Jump to return label if %rdi is 0

.strlen_loop:
	mov [rax], eax # Move value inside string pointer to %eax
	cmp 0, eax # Check if string char is 0
	je .return # If string char is 0, return

	add ebx, 1 # Else, add 1 to length
	add rax, 1 # Increment string pointer by 1
	jmp .strlen_loop


.return:
	mov ebx, rax # Load the length of the string to the return register
	ret
