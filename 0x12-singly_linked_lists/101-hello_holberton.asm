global main
extern printf

section .data
    format db 'Hello, Holberton', 10, 0

section .text
main:
    lea edi, [format]
    xor eax, eax
    call printf
    mov eax, 0
    ret

