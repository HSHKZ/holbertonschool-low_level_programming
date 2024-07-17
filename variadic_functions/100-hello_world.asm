section .data
    message db 'Hello, World', 0xA  ; Our message plus newline character
    msglen equ $ - message          ; Length of the message including newline

section .text
    global _start

_start:
    ; System call write (rax = 1)
    mov rax, 1          ; syscall number for sys_write
    mov rdi, 1          ; file descriptor 1: stdout
    mov rsi, message    ; message to print
    mov rdx, msglen     ; message length

    syscall             ; invoke syscall

    ; Exit the program
    mov rax, 60         ; syscall number for sys_exit
    xor rdi, rdi        ; exit status 0
    syscall             ; invoke syscall
