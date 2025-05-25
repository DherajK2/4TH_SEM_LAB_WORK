```bash
    AREA mydata, DATA, READONLY
    EXPORT __Vectors
__Vectors
    DCD 0x20000000
    DCD Reset_Handler

    AREA mycode, CODE, READONLY
    EXPORT Reset_Handler
ENTRY
Reset_Handler
    LDR R0, =NUM1
    LDR R0, [R0]

    LDR R1, =NUM2
    LDR R1, [R1]

Label
    ADD R0, R0, R1
    ADD R1, R1, #1
    CMP R1, #11
    BNE Label

    LDR R2, =SUM
    STR R0, [R2]
    NOP

HERE
    B HERE

    AREA MYDATA1, DATA, READONLY
NUM1    DCD 0xF0000002
NUM2    DCD 0x00000002

    AREA MYDATA2, DATA, READWRITE
SUM     DCD 0x0
    END

```
