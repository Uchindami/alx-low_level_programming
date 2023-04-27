section .data
    format db "Hello, Holberton", 10, 0

section .text
    global main
    extern printf

main:
    push  rbp          ; function prologue
    mov   edi, format
    xor   eax, eax
    call  printf
    xor   eax, eax     ; return 0
    pop   rbp          ; function epilogue
    ret
