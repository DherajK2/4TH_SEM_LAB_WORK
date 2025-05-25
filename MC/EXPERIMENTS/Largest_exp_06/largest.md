### 6. Develop an ALP to find the largest number in an array of 32 numbers
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


#### Comments added to explain

```bash
        AREA large, DATA, READONLY
        EXPORT __Vectors

__Vectors
        DCD 0x20001000       ; Initial stack pointer (top of RAM)
        DCD Reset_Handler    ; Reset vector (entry point)

        AREA mycode, CODE, READONLY
        EXPORT Reset_Handler
ENTRY
Reset_Handler
        MOV R5, #6           ; R5 = loop counter for 6 values (we’ll skip first)
        
        LDR R1, =VALUE       ; R1 = address of first element (VALUE)
        LDR R2, [R1]         ; R2 = VALUE[0], initial maximum
        ADD R1, R1, #4       ; R1 now points to VALUE[1] (next element)

LOOP
        LDR R4, [R1]         ; R4 = VALUE[n], current value to check
        ADD R1, R1, #4       ; Move pointer to next array element
        CMP R2, R4           ; Compare current max (R2) with current value (R4)
        BHI LOOP1            ; If R2 > R4, skip updating (keep old max)
        MOV R2, R4           ; Else, update max to current value

LOOP1
        SUB R5, R5, #1       ; Decrement loop counter
        CMP R5, #0           ; Check if we've done all 6 comparisons
        BNE LOOP             ; If not finished, loop again

        LDR R4, =RESULT      ; R4 = address of RESULT
        STR R2, [R4]         ; Store max value (R2) into RESULT

        NOP                  ; No operation (placeholder for breakpoint)

Here
        B Here               ; Infinite loop (program ends here)
        AREA mydata1, DATA, READONLY
VALUE
        DCD 0x03             ; VALUE[0] → used as initial max
        DCD 0x02             ; VALUE[1]
        DCD 0x05             ; VALUE[2]
        DCD 0x04             ; VALUE[3]
        DCD 0x01             ; VALUE[4]
        DCD 0x09             ; VALUE[5]
        DCD 0x07             ; VALUE[6]

        AREA mydata2, DATA, READWRITE
RESULT
        DCD 0x0              ; Memory space to store the maximum value

        END

```
