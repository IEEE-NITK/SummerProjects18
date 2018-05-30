section .bss 
        str: resd 100

section .text
        global _start
    
_start:
        mov rax, 0x03
        mov rbx, 0x00
        lea rcx, [str]
        mov rdx, 400   
        int 0x80            ; system call to read a number

        mov r8, rax         ; the length of the string read +1 will be stored in rax
        dec r8              ; decremented to get the length of the string
        dec r8              ; it is decremented since arrays are 0 indexed

        mov rcx, 0
        mov rdx, 0
        mov rsi, 0          ; rsi will act as counter variable to iterate through the string
        mov rdi, r8         ; rdi will store the length of the string -1
        inc rdi             
        dec rsi
   loop:cmp rsi, rdi        ; this is the exit condition for the loop (when rsi becomes greater than or equal to rdi)
        jge check

        inc rsi
        dec rdi
        mov cl, byte[str+rsi]   ; the byte at the rsiTH location in the string is copiped to cl 
        mov dl, byte[str+rdi]   ; the byte at the rdiTh location in the string is copied to dl
        cmp dl, cl              ; the corresponding bytes from the beginning and the end are compared and the loop continues only if they are equal
        je loop
        
  check:cmp cl, dl          ; after exit from the loop, we need to know if it exited because rsi became greater than or equal rdi or because cl was not equal to dl. Hence we check cl and dl again
        jl notPalindrome    ; If they are not equal, it means that the entered string is not a palindrome
        jmp palindrome
        
  notPalindrome:mov r15, 0  ; If it is not a palindrome, store 0 in r15
  jmp exit
  
  palindrome:mov r15 ,1     ; If it is a palindrome, store 1 in r15
  
  exit:               
        mov rax, 0x01
        mov rbx, 0x00
        int 0x80            ; exit call
