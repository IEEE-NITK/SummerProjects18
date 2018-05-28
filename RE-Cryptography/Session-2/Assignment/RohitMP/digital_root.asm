section .bss
        num: resb 100

section .text
        global _start

_start:
        mov rax, 0x03
        mov rbx, 0x00
        lea rcx, [num]
        mov rdx, 100
        int 0x80        ; system call to read a string and store it in num

        mov r8, rax     ; rax holds the length of the string read + 1
        dec r8          ; decremented by 1 to make it store the length of he string
        dec r8          ; again decremented by 1 since arrays are 0 indexed
        mov rax, 0      
        mov rbx, 0
        mov rsi, 0
        mov rcx, 0
        mov rdx, 0      ; these registers are set to 0 since they will be used later and only a part of the register will be used, therefore just copying 8 or 16 bits will results in error
  loop: mov cl, byte[num+rsi]   ; the lower 8 bytes in rcx will store the the rsiTH byte of num
        sub cl, 48              ; it is subtracted by 48 since cl would've been storing the ascii value of the number needed
        add bl, cl              ; the digits extracted are added on to bl   
        inc rsi                 
        cmp rsi, r8
        jle loop        ;loop used to get the sum of all digits in the number
        
        ;the answer we get here may be greater than 10 and hence we may need to calculate the sum of the digits again but we know that the sum of the digits calculated recursively is also given by the number%9 
        mov r9, 9
        mov rax, rbx    ; the sum we get by adding all digits once is copied to rax
        div r9          ; the sum in rax is divided by 9 and the quotient is stored in rax and the remainder in rdx. This remainder is the required sum%9
        mov r15, rdx    ; final answer stored in r15
        
        mov rax, 0x01
        mov rbx, 0x00
        int 0x80        ; exit call
