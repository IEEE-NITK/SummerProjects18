section .data
  msg db "enter string: "

  lenMsg equ $-msg
  lenP1 equ $-p1
  lenP2 equ $-p2
  p1 db "palindrome "
  p2 db "not palindrome"
  strlen db 80
  f db 1

section .bss
  str: resb 80
  strcpy: resb 80

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
    mov rcx, str
    mov rdx, 80
    int 0x80

    sub rax, 2
    mov r8, 0
    mov r9, rax
    jmp loop

    loop:
      cmp r8, r9
      jge paln

      mov al, [str+r8]
      mov bl, [str+r9]
      cmp al, bl
      jne not_paln

      add r8, 1
      sub r9, 1
      jmp loop
    paln:
      mov r10, 1
      ;mov rax, 0x04
      ;mov rbx, 0x01
      ;mov rcx, p1
      ;mov rdx, lenP1
      ;int 0x80
      jmp exit

    not_paln:
      mov r10, 0
      ;mov rax, 0x04
      ;mov rbx, 0x01
      ;mov rcx, p2
      ;mov rdx, lenP2
      jmp exit
  exit:
    add r10, '0'
    mov [f], r10

    mov rax, 0x04
    mov rbx, 0x01
    mov rcx, f
    mov rdx, 1
    int 0x80

    mov rax, 0x01
    mov rbx, 0x00
    int 0x80
