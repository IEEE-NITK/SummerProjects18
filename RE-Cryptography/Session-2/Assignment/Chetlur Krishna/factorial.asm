section .text
    global _start

_start:
    inc eax     
mov ebx, 2  
mov ecx, 3  
jmp count    

count:  
imul eax, ebx       
cmp ebx, ecx    
je inttostring  
inc ebx     
jmp count
mov esi,3
inttostring:    
mov ebx,10     
  
div ebx     
add [result+esi], dl    
dec esi     
cmp esi,0  
je displey  
jmp inttostring         

 displey:
        mov eax, 4
        mov ebx, 1  
        mov ecx, result
        mov edx, size
        int 80h
        mov eax, 1  
        int 80h 

    section .data

    result times 4 db 48 
    size equ $ - result
