section .data
n:dw 5

section .text
        global _start 
_start:
        mov cx,word[n]
        call fact;
        mov rax,rsi	;rsi stores the factorial of number
        call stdout_write
        call exit_prog;
fact:
        mov rsi,0x01	
        mov rdx,0x02
_loop:
        cmp rdx,rcx	
        jg return

        imul rsi,rdx	
       
	inc rdx
        jmp _loop

return:
        ret

stdout_write:
        mov rax,0x04
        mov rbx,0x01
        int 0x80

        ret

exit_prog:
        mov rax,0x01
        mov rbx,0x00
	int 0x80
