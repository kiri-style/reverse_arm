.syntax unified
.cpu cortex-m3
.thumb

.section .isr_vector, "a"
.align 2
.word 0x20010000      @ Pointeur de pile initial (haut de la RAM 64K)
.word Reset_Handler   @ Point d'entrée

.section .text
.global Reset_Handler
.type Reset_Handler, %function
Reset_Handler:
    bl main
    b .
