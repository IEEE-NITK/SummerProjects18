;program to find the digital root of a number
;sum all the digits of the number and repeat till the answer is a single digit


section .data

	num dd 0
	 

section .text
	global _start
_start:
	lea rcx, [str]		;load the address of str into rcx
        mov rdx, 400

        mov rax, 0x03		;intput the intial number as a string
        mov rbx,0x00
        int 0x80

	mov r9,rax		;r9 stores the value of the string_length+1
	dec r9
	dec r9			;r9 stores the index of the last element of the string
	lea rdi,[str]		;rdi and rsi are initialized to the first and last elements of the number
        lea rsi,[str+r9]
        mov rax,0            	; rax,rbx,rcx,rdx are set to 0   
	mov rbx,0
	mov rcx,0
	mov rdx,0

label:

	;extraction of numbers and their addition
	
	mov bl,byte[rdi]	;extract the number from address in rdi and store in bl
	add al,bl		;add bl to the sum of the previous numbers stored in al
	sub al,'0'		;subtract the value of '0' to give the actual number
	cmp rdi,rsi		;check the postion of rsi and rdi
        jge cont		;exit loop if we have come to the end of the number
	inc rdi			;move on to address of the next digit
	jmp label

cont:	
	mov r10,rax		;move the sum of the numbers to r10
	cmp r10,10		;check if the sum is less than 10
        jl answer		;if above condition is true, no furthur addition is required

	
	mov rax,0		;set values of rax,rbx,r11 to 0
        mov rbx,0
        mov r11,0 		
label3:
	mov edx,0		;set values of edx and ecx to 0
	mov ecx,0
        xor edx,ecx
	mov eax,r10d		;move the value in r10 to eax
	mov ecx,10		;set ecx to 10
        div ecx			;divide eax by ecx
        add r11,rdx		;add the remainder of the above operation(stored in rdx) to r11(which will store the sum of all the modulus operations is the loop)
	mov r10,rax		;set r10 to the quotient of the division operation
        cmp eax,1		;if the quotitent is less than 1, exit the loop and check if it is a single digit
        jl label2
	jmp label3		

	
label2:
	mov r10,r11		;the sum of the digits replaces the previous number in r10
	cmp r10,10		;check if r10 is a single digit
	jl answer		;if above condition is true, no more addition is required
	mov rax,0
        mov rbx,0		;set values of rax,rbx,r11 to 0
        mov r11,0 

	;if the value of r10 is not a single digit, repeat addition of the digits

div_part:
	mov edx,0               ;set values of edx and ecx to 0
        mov ecx,0
	xor edx,ecx		
        mov eax,r10d		;move the value in r10 to eax
        mov ecx,10		;set ecx to 10
        div ecx                 ;divide eax by ecx
        add r11,rdx             ;add the remainder of the above operation(stored in rdx) to r11(which will store the sum of all the modulus operations is the loop)
        mov r10,rax             ;set r10 to the quotient of the division operation
        cmp eax,1               ;if the quotitent is less than 1, exit the loop and check if it is a single digit
        jl label2
        jmp div_part


answer: 
	
	mov r12,r10
	add r12,'0'

	;r10 stores the answer in hexadecimal form
	;r12 stores the value in string form

	;exit
	

exit_prog:
        mov rax, 0x01
        mov rbx, 0x00
        int 0x80






SECTION .bss
	str: resd 100
	
