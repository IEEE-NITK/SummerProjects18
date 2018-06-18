section .data
int: dq 5

section .text
    global _start
    extern printf
_start:
     
      mov rsi, [int]
      mov rdi, 0x01
      call facto
      call print_int
      call end_prog

facto:
       
      cmp rsi, 0x01
      je print_int
      imul rdi, rsi
      dec rsi
      jmp facto
    
print_int:
   
      	mov rax, 0x04
      	mov rbx, 0x01
        mov rcx, rsi
	mov rdx, 0x08  
	int 0x80
      


end_prog: 
	mov rax, 0x01
	mov rbx, 0x00
	int 0x80
     




    
