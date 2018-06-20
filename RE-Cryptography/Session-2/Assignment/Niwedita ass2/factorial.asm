
SECTION  .data
  

SECTION .text


global _start


_start: 

	
	mov rax, 1
	mov r8, 6
	mov r9, 1
	   

.beginLooping:

	mul r9
	inc r9
	cmp r8,r9
	jne .beginLooping
        mov r15,rax   ;r15 stores factorial value     
	

	mov rax, 0x03
        mov rbx, 0x00
        int 0x80
	ret		;std_out
   
 	mov rax, 0x01
        mov rbx, 0x00
        int 0x80	;exit   


             
              	     
              

              
       
