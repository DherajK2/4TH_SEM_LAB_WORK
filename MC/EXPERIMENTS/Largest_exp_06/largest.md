```bash

    AREA large, DATA, READONLY
    EXPORT __Vectors
__Vectors
    DCD 0x20001000
    DCD Reset_Handler

    AREA mycode, CODE, READONLY
    EXPORT Reset_Handler
ENTRY
Reset_Handler
    MOV R5, #6
    LDR R1, =VALUE
    LDR R2, [R1]
    ADD R1, R1, #4
LOOP
    LDR R4, [R1]
    ADD R1, R1, #4
    CMP R2, R4
    BHI LOOP1
    MOV R2, R4
LOOP1
    SUB R5, R5, #1
    CMP R5, #0
    BNE LOOP
    LDR R4, =RESULT
    STR R2, [R4]
    NOP
Here
    B Here

    AREA mydata1, DATA, READONLY
VALUE
    DCD 0x03
    DCD 0x02
    DCD 0x05
    DCD 0x04
    DCD 0x01
    DCD 0x09
    DCD 0x07

    AREA mydata2, DATA, READWRITE
RESULT
    DCD 0x0
    END
```
