section .data
        a1 dq 1,2,3,4,5   ; 
        a2 dq 6,7,8,9,10  ; 
        a3 dq 0,0,0,0,0   ; 

section .text
        global _start:
        
_start:
        lea r8, [a1]       
        lea r9, [a2]       
        lea r10, [a3]     
        mov r14, 1        ; r14=counter
        mov r15, 5        ; r15=arr size 
  top: inc r15
        mov r11, [r8]        
        add r11, [r9]        
        mov r10, [r11]      
        add r8, 8           
        add r9, 8
        add r10, 8           
        cmp r15, r14         
        jle top
	mov rax, 0x04	     
	mov rbx, 0x01	     

        mov rax, 0x01
        mov rbx, 0x00
        int 0x80            
