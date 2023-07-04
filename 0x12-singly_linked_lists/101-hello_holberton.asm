section .data
    format db "Hello, Holberton", 0
    newline db 10, 0

section .text
    extern printf

global main
main:
    sub rsp, 8            ; Align stack pointer

    mov rdi, format       ; Load format string address
    xor eax, eax          ; Clear EAX register
    call printf           ; Call printf function

    mov rdi, newline      ; Load newline address
    xor eax, eax          ; Clear EAX register
    call printf           ; Call printf function

    add rsp, 8            ; Restore stack pointer
    mov eax, 0x60         ; System call number for exit
    xor edi, edi          ; Exit code 0
    syscall              ; Call kernel to exit

section .data
