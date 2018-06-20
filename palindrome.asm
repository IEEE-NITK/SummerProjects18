section .data
  inp db "input a string $",0
  msg1 db "is palindrome",0
  msg2 db "is not palindrome",0

section .bss
  str: resd 150
  len equ $-str
section .text
  global _start
_start:
 mov eax,4
 mov ebx,1
 mov ecx,inp
 int 0x80
 mov eax,3
 mov ebx,0
 mov ecx,str
 int 0x80
 mov ebx,str                                           
 mov eax,(str+len-1)                                    
check:
 mov dl, [ebx]                        
 cmp [eax], dl
 jne failure
 inc ebx
 dec eax
 loop check                                                                
 mov ecx,msg1  
 mov ebx,1  
 mov eax,4  
 int 0x80  
 jmp done
failure:
 mov ecx,msg2
 mov ebx,1
 mov eax,4
 int 0x80
 jmp done
done:
 ret
 mov eax,1
 int 0x80
