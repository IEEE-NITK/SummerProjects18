global _start
section .data

msg db 'enter a number:',0xa
len equ $ -msg
section .bss
num resb 6
res resb 5

section  .text
_start: 
mov eax, 4
mov ebx, 1
mov ecx, msg
mov edx, len
int 0x80
 
mov eax, 3
mov ebx, 2
mov ecx ,num
mov edx , 6
int 0x80
mov      ecx, 10
loop:   
cmp eax, 9
jle done
xor ebx, ebx ; use ebx to sum up digits
innerloop:      
xor edx, edx
div ecx   ;edx stores the remainder
add ebx, edx

test eax, eax
jnz innerloop
mov eax, ebx
jmp loop

done:   
 add eax, 48
 mov [res],eax
 mov eax, 4
 mov ebx, 1
 mov ecx, res
 mov edx, 5
int 0x80
mov eax, 1
mov ebx, 0
int 0x80
