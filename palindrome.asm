section .bss
	
str: resd 100		;Reserving 400 bytes for a str. This is an uninitialized variable.


section .data

new_line: db 0x0a, 0x00


section .text
	global _start

_start:

	lea rcx, [str]
	mov rdx, 400
	call stdin_read

	mov r9, rax     
                	
	dec r9		; Now, r9 has the length of the string. 
	mov r8, r9
        mov r10,0x01
	dec r9			.

	call reverse_string
	
	lea rcx, [str]
	inc r9
	mov rdx, r9
	call stdout_write

	lea rcx, [new_line]
	mov rdx, 0x02
	call stdout_write

	call exit_prog



reverse_string:
		
        lea rdi, [str]		; rdi has the address of the first character.
	
	lea rsi, [str + r9]	; rsi has the address of the last character.


_loop:
	cmp r10,r8              ; comparision takes place same no. of types as the length of   
                                  string 
	je return

	cmp byte[rdi], byte[rsi]
        jne return
	inc rdi
	dec rsi

	jmp _loop



return:
        ret


stdin_read:
        mov rax, 0x03
        mov rbx, 0x00
        int 0x80

        ret

stdout_write:
        mov rax, 0x04
        mov rbx, 0x01
        int 0x80

        ret

exit_prog:
        mov rax, 0x01
        mov rbx, 0x00
        int 0x80

