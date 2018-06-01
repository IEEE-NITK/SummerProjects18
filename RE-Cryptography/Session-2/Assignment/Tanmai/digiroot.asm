section .data
  msg db "Enter number"
  lenMsg equ $-msg
  root db 0
section .bss
  num resb 1
  tmp resb 1
section .text
  global _start

  _start:
    ;prompt
    mov rax, 0x04
    mov rbx, 0x01
    mov rcx, msg
    mov rdx, lenMsg
    int 0x80

    ;input
    mov rax, 0x03
    mov rbx, 0x00
    mov rcx, num
    mov rdx, 1
    int 0x80

    mov rdx, 0
    mov rax, num
    mov rbx, 9
    div rbx

    mov [root], rbx
    ;loop:
    ;  mov rdx, 0
    ;  mov rax, tmp
    ;  mov rbx, 10
    ;  div rbx

    ;  mov r8, root
    ;  add r8, rdx
    ;  mov [root], r8
    ;  check:
    ;    mov r9, tmp
    ;    cmp r9, 10
    ;    jge sw
    ;sw:
    ;  mov rax, root;
    ;  mov
    ;end:
    ;mov rdx, '0'
    ;mov [root], rdx

    ;mov rax, 0x04
    ;mov rbx, 0x01
    ;mov rcx, root
    ;mov rdx, 1
    ;int 0x80
    exit:
      mov rax, 0x01
      mov rbx, 0x00
      int 0x80
