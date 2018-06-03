section .data

section .text
        global _start

_start:
	mov rax, 0x04
	mov rbx, 0x01 
	mov r8, 5
	mov r9, 1;
	mov r10, 1; 
	

	
top:
	cmp r9, r8
	jg label1
	mul r9
	inc r9
	jmp top
label1:
	mov r11,r10  
	
	mov rax, 0x01  
	mov rbx, 0x00 
	int 0x80


