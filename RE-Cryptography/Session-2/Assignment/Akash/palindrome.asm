section .data
    a db "malayalam",0
    b equ $-a

    msg1 db "is pallindrome",10,0
    msg2 db "is not pallindrome",10,0
    msg3 db "",10,0
section .text
    global main
    extern printf
main:
    nop
    xor eax,eax    
    xor ebx,ebx
    mov eax,a       
    mov ebx,b
    add eax,ebx
    dec eax         

    xor ebx,ebx
    xor edx,edx
    xor ecx,ecx

start:
    inc ecx
    cmp ecx,(b/2)       
    jle check
    jmp palindrome
check:  
    mov dl,byte[eax]    
    cmp byte[a+ebx],dl  

checkContinue:
    inc ebx         
    dec eax
    je start
    jne nonPalindrome
palindrome:
    pusha
    push msg1
    call printf
    add esp,4
    popa
    jmp done
nonPalindrome:
    pusha
    push msg2
    call printf
    add esp,4
    popa
    jmp done
done:
     nop
