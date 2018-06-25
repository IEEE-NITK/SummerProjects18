section .data
a dd 1,2,3
b dd 4,5,6
s times 3 dd 0

section .text
	global _start
_start:
	mov rax,a
	mov rbx,b
	mov rcx,s
	mov rdx,3
loop1:
	add rcx,[rax]
	add rcx,[rbx]
	mov r8,rcx     ;r8 stores sum
	dec rdx
	cmp rdx,0
	je exit
	add rcx,4
	add rax,4
	add rbx,4
	add r8,4
	jmp loop1
exit:
	mov rax,0x01
	mov rbx,0x00
	int 0x80
	
	
	 

	
