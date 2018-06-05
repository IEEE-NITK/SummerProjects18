;program to check if a given string is a palindrome


SECTION .data
	false_msg  db  'Not a Palindrome!' 	;message showing false condition(The word is not a palindrome)
	len1  equ  $ - false_msg
	true_msg  db  'Palindrome!' 		;message showing true condition(The word is a palindrome)
        len2  equ  $ - true_msg



SECTION .bss
	str: resd 100

SECTION .text
	global _start
_start:
	lea rcx, [str]		;address of str is loaded into rcx	
	mov rdx, 400		
	mov rax, 0x03		;input the string
	mov rbx,0x00
	int 0x80

	mov r9, rax		;r9 stores length_of_string+1
	sub r9,2		;decrease by two to get the maximum index of the string (length_of_string-1)
	lea rdi,[str]		;rdi is initialized to the address of the first element of the string
	lea rsi,[str+r9]	;rsi is initialized to the address of the last element of the string
	mov rcx, 0x00		; A temporary register1 used.
	mov rax, 0x00		; A temporary register2 used.	


label1:
	cmp rdi,rsi		;compare the position of rsi and rdi
	jge pal			;when all elements are compared and no false condidition, is shown print message for true condition
	mov cl, byte[rdi]	;move the elements to cl and al
	mov al, byte[rsi]
	cmp cl,al		;the two chracters at opposite ends are compared
	jne notpal		;if the characters are not equal, print the false condiditon message
	inc rdi			;change rdi and rsi to move on to the next characters
	dec rsi
	jmp label1		

pal:
	;print the true condition message

        mov eax,4
        mov ebx,1
        mov ecx,true_msg
        mov edx,len2
        int 0x80
	
	;exit
        mov rax, 0x01
        mov rbx, 0x00
        int 0x80
 


notpal:
	;Print the false condition message

	mov eax,4
	mov ebx,1
	mov ecx,false_msg
	mov edx,len1
	int 0x80

	;exit
        mov rax, 0x01
        mov rbx, 0x00
        int 0x80

