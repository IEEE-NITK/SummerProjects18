SECTION .data
	msg1: db "This statement should get printed!",13,10,0
	len1  equ  $ - msg1
	msg2: db "This statement should not get printed",58,40,13,10,0
	len2  equ  $ - msg2
	msg3: db "This again will get printed!",13,10,0
	len3  equ  $ - msg3

SECTION .text
	global _start

_start:
	mov eax,4
	mov ebx,1
	mov ecx,msg1
	mov edx,len1
	int 0x80
	
	jmp label1

	mov eax,4
        mov ebx,1
        mov ecx,msg2
        mov edx,len2
        int 0x80

label1:
	
	mov eax,4
        mov ebx,1
        mov ecx,msg3
        mov edx,len3
        int 0x80


	mov rax,1
	mov rbx,0
	int 0x80
