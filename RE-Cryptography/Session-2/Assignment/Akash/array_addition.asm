section .data
     A1 DD 1,2,3,4
     A2 DD 5,6,7,8
     R  DD 0,0,0,0 
ends
section .text
	global _start:
                               
_start:
     
        lea rax, [A1]      
        lea rbx, [A2]     
        lea rcx, [R]     
        mov rdx, 0          
        mov rbp, 5         
loop1:      
        inc rdx
        mov rdi, [rax1]       
        add rdi, [rax2]       
        mov [rcx], rdi     
        add rax, 8           
        add rbx, 8
        add rcx, 8         
        cmp rdx, rbp       
        jl loop1
     

        mov r8, 0x01
        mov r9, 0x00
        int 0x80         
