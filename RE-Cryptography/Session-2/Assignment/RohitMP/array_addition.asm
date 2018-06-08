section .data
        arr1 dq 1,2,3,4,5   ; the first array
        arr2 dq 6,7,8,9,10  ; the second array
        arr3 dq 0,0,0,0,0   ; the third array which will store the sum of the above two

section .text
        global _start:
        
_start:
        lea r8, [arr1]      ; r8 is storing the address of the first element of arr1
        lea r9, [arr2]      ; r9 is storing the address of the first element of arr2
        lea r10, [arr3]     ; r10 is storing the address of the first element of arr3
        mov rdi, 0          ; rdi will act as counter register to iterate through the array elements
        mov rsi, 5          ; rsi will store the total number of array elements
  here: inc rdi
        mov r11, [r8]       ; the value in the location which is stored in r8 is moved to r11 ( r11=arr1[0])
        add r11, [r9]       ; the value in the location which is stored in r9 is added to r11 ( r11+=arr2[0])
        mov [r10], r11      ; the sum is moved to the first element of arr3
        add r8, 8           
        add r9, 8
        add r10, 8          ; the three memory locations are incremented by 8 to point to the next array memory location since each array element occupies 8 bytes
        cmp rdi, rsi        ; checking condition for looping
        jl here

        mov rax, 0x01
        mov rbx, 0x00
        int 0x80            ; exit call
