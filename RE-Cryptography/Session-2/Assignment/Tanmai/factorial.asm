section .text
	global _start
	extern printf
	f db 1
_start:
	mov r8, 7
	mov r9, r8

	loop:
		cmp r8, 1
		jle exit

		dec r8
		imul r9, r8
		jmp loop
		;r9 is factorial of 7
	exit:
		mov rax, 0x01
		mov rbx, 0x00
		int 0x80
