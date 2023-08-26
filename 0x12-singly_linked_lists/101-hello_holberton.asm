section .data
    hello_holberton db "Hello, Holberton", 10, 0

section .text
    global main
    extern printf

main:
    push rbp
    mov rdi, hello_holberton
    call printf
    pop rbp
    ret
