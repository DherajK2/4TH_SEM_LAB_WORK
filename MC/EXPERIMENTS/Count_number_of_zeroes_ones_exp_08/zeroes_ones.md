### 8.Develop an ALP to count the number of ones and zeros in two consecutive Memory locations


```bash
	AREA mydata,data,READONLY
	EXPORT __Vectors
__Vectors
	DCD 0x20000000
	DCD Reset_Handler
	AREA mycode,code,readonly
	EXPORT Reset_Handler
ENTRY
Reset_Handler
	MOV R2,#0;zeros
	MOV R3,#0;ones
	MOV R7,#2;data counter
	LDR R6,=VALUE
L 	MOV R1,#32;0x20
	LDR R0,[R6],#4;post index instruction
L0	MOVS R0,R0,ROR #1
	BHI ONES
ZEROS 
	ADD R2,R2,#1
	B L2
ONES
	ADD R3,R3,#1
L2	SUBS R1,R1,#1
	BNE L0
	SUB R7,R7,#1
	CMP R7,#0
	BNE L
HERE B HERE
VALUE DCD 0x11111111,0xAA55AA55
	END
```
#### Comments addded to understand
```bash
        AREA mydata, DATA, READONLY
        EXPORT __Vectors

__Vectors
        DCD 0x20000000         ; Initial stack pointer (top of RAM)
        DCD Reset_Handler      ; Reset handler (entry point)

        AREA mycode, CODE, READONLY
        EXPORT Reset_Handler
ENTRY
Reset_Handler
        MOV R2, #0             ; R2 = count of zeros, initialize to 0
        MOV R3, #0             ; R3 = count of ones, initialize to 0
        MOV R7, #2             ; R7 = number of 32-bit integers to process

        LDR R6, =VALUE         ; R6 = address of VALUE (input data array)

; -------- Outer Loop: For each 32-bit value --------
L
        MOV R1, #32            ; R1 = bit counter (32 bits per number)

        LDR R0, [R6], #4       ; Post-index: R0 = *R6, then R6 += 4
                               ; Load next 32-bit value into R0

; -------- Inner Loop: Process each bit of current value --------
L0
        MOVS R0, R0, ROR #1    ; Rotate R0 right by 1, MSB → Carry Flag
                               ; MOVS sets flags (Carry contains last bit)

        BHI ONES               ; If Carry = 1 → it's a 1-bit → go to ONES

; -------- Bit is 0 --------
ZEROS
        ADD R2, R2, #1         ; Increment zero count
        B L2                   ; Go to L2 to continue next bit

; -------- Bit is 1 --------
ONES
        ADD R3, R3, #1         ; Increment one count

; -------- Decrement bit counter and loop if not done --------
L2
        SUBS R1, R1, #1        ; R1 = R1 - 1, update flags
        BNE L0                 ; If R1 ≠ 0, repeat bit processing

; -------- Done with current number --------
        SUB R7, R7, #1         ; Decrement number counter
        CMP R7, #0             ; Check if more numbers to process
        BNE L                  ; If yes, process next 32-bit value

; -------- End of program --------
HERE
        B HERE                 ; Infinite loop (stop execution)

; -------- Input Data --------
VALUE
        DCD 0x11111111, 0xAA55AA55 ; Two 32-bit values to be processed

        END
```
