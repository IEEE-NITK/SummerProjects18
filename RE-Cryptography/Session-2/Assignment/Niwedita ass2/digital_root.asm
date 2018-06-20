
SECTION .data
n: dq 56786

SECTION .text
global _start
_start:
	
	mov rcx, QWORD[n]
	mov rsi, rcx
	mov r9, rsi 
	cmp rsi, 10
	jle d_root

func:
	mov r9, 0

loop:
	mov rdi, 10
	div rdi
	add r9, rdi
	cmp rsi, 10
	jg loop
        
	cmp r9, 10
	jl d_root
 	jmp func

d_root:
	mov r15, r9  ;r15 is the digital root of n

stdout_write:
	mov rax, 0x03
    mov rbx, 0x00
    int 0x80

        ret


exit:
	mov rax, 0x01
    mov rbx, 0x00
    int 0x80
