section .bss
num: resd 400

section .text

	global _start
_start:
	lea rcx,[num]
	mov rdx,400
	call stdin_read
	call string_to_int
	call digital_root
	mov ecx,esi
	mov edx,400
	call stdout_write
	call exit_prog
string_to_int:			;convert input number from ascii values(string format) to integer and store in edi
	lea esi,[num]
	mov edi,0
	mov ebx,10
	mov r8,0
_loop1:	cmp byte[esi],0x0a
	je return1
	
	mov r8b,byte[esi]
	sub r8b,48
	
	imul edi,ebx
	add edi,r8d
	
	inc esi
	jmp _loop1
	
return1:
	ret

digital_root:
	mov eax,edi
	mov esi,0x00
	
_loop2:	mov edx,0	;loop to add the digits of the input number
	mov ecx,10
	cmp eax,0
	je again
	
	div ecx		;divide by 10
	add esi,edx	
	jmp _loop2

again: 	cmp esi,10	;finally esi holds the digital root of the input number
	jl return
	mov eax,esi
	mov esi,0x00
	jmp _loop2	 	
	
return:
	ret
stdin_read:
	mov rax,0x03
	mov rbx,0x00
	int 0x80
	ret
stdout_write:
	mov rax,0x04
	mov rbx,0x01
	int 0x80
exit_prog:
	mov rax, 0x01
	mov rbx, 0x00
	int 0x80	
