section .data
    format db "Hello, Holberton", 10  ; Define the format string with newline (\n)
    formatLen equ $ - format           ; Calculate the length of the format string

section .text
    global main
    extern printf

main:
    sub rsp, 8            ; Align stack (for macOS compatibility, optional for Linux)
    lea rdi, [rel format] ; Load the address of format string into RDI
    xor eax, eax          ; Clear EAX register (return value)
    call printf           ; Call printf function
    xor eax, eax          ; Set EAX to 0 (exit status)
    add rsp, 8            ; Restore stack pointer (optional for Linux)
    ret                   ; Return from main

