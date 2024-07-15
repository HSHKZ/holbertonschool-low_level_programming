section .data
    msg db 'Hello, World', 0x0A  ; Message to print followed by newline
    len equ $ - msg              ; Length of the message

section .text
    global _start

_start:
    ; sys_write (stdout)
    mov rax, 1          ; syscall number for write
    mov rdi, 1          ; file descriptor for stdout
    mov rsi, msg        ; pointer to the message
    mov rdx, len        ; length of the message
    syscall

    ; sys_exit (exit code 0)
    mov rax, 60         ; syscall number for exit
    xor rdi, rdi        ; exit code 0
    syscall
