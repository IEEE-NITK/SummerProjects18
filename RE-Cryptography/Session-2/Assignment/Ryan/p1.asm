;program to get the factorial of a number


SECTION .data      		;initialized data
	ans dd 0
	




SECTION .text       		;asm code
	global _start	

_start:
	
        mov ebx,12		;program gives factorial of 12
	mov eax,ebx	

	
				;eax is initialized to 12(ebx). eax will store the result of each multiplication step.
	
	
label1:
	cmp ebx,1
	jle label2		;loop is exited if the value of ebx is 1.
	dec ebx			;the value of ebx is decremented and multiplied with the value of eax till the value of ebx reaches 1
	mul ebx
	jmp label1	
label2:
		
	mov r9,rax		;r9 stores the value of the factorial


	mov rax, 0x01           ; 0x01 is the system call number for exit()
        mov rbx, 0x00           ; 0 is the argument for the syscall
        int 0x80                ; Issue a software interrupt

SECTION .bss       		;uninitialized data
