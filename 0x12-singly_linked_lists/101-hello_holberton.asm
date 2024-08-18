section .data
    message db "Hello, Holberton", 10

section .text
    global _start

_start:
    mov rax, 1      ; system call for write
    mov rdi, 1      ; file descriptor for stdout
    mov rsi, message ; address of the string to write
    mov rdx, 14     ; length of the string
    syscall

    mov rax, 60     ; system call for exit
    xor rdi, rdi    ; exit code 0
    syscall
