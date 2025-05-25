# 🧠 Microcontroller Viva Questions (ARM Architecture) – Theory Notes

---

## 1. Full Form of ARM

**ARM** stands for **Advanced RISC Machine**.

It is a family of RISC-based processors known for their low power consumption and high performance. ARM processors are commonly used in mobile, embedded, and IoT devices.

---

## 2. Advantages of ARM

- **Low Power Consumption**: Suitable for battery-powered and embedded systems.
- **High Performance**: Optimized instruction set leads to faster execution.
- **RISC Architecture**: Simplified instruction set makes processing faster and more efficient.
- **Scalability**: Used in a wide range of devices, from microcontrollers to smartphones.
- **Thumb Instructions**: Compressed 16-bit instructions save memory.
- **Large Ecosystem**: Supported by many development tools, IDEs, and documentation.

---

## 3. Why Do We Use C Language in ARM Programming?

- **Portability**: C code can run on different hardware with minimal changes.
- **Readability**: Easier to understand and debug compared to assembly.
- **Efficiency**: Compilers optimize C code very well for ARM targets.
- **Hardware Access**: C allows low-level access using pointers and memory mapping.
- **Fast Development**: Writing and maintaining C code is quicker than assembly.

---

## 4. Difference Between LDR and STR Instructions

| Instruction | Full Form       | Function                                      |
|-------------|------------------|-----------------------------------------------|
| `LDR`       | Load Register    | Loads data from memory into a register        |
| `STR`       | Store Register   | Stores data from a register into memory       |

**How They Work:**

- `LDR R1, [R0]` loads the data from the memory address stored in `R0` into register `R1`.
- `STR R1, [R2]` stores the value in `R1` to the memory location pointed to by `R2`.

---

## 5. Where Does Memory Start in ARM (Based on the Code)?

In ARM Cortex-M microcontrollers:

- **Flash memory** typically starts at address `0x00000000`, where the **vector table** is located.
- In the given code, the line `DCD 0x20000000` initializes the **stack pointer** to `0x20000000`, which is the start of **RAM**.

So:
- **Code memory (Flash)** starts at `0x00000000`
- **RAM** starts at `0x20000000` (used for stack and variables)

---

## 6. If R0 Stores `0x00000002`, Can It Store That?

Yes.

- ARM registers like `R0` are **32-bit general-purpose registers**.
- They can store any value from `0x00000000` to `0xFFFFFFFF` (unsigned), or from `-2,147,483,648` to `+2,147,483,647` (signed).
- `0x00000002` (decimal 2) fits well within that range.

---

## 7. RISC vs CISC Architecture

| Feature             | RISC (Reduced Instruction Set Computer)   | CISC (Complex Instruction Set Computer)       |
|---------------------|-------------------------------------------|-----------------------------------------------|
| Instruction Set     | Small and simple                          | Large and complex                             |
| Execution Speed     | Fast – one instruction per cycle (often)  | Slower – may take multiple cycles per instruction |
| Hardware Complexity | Simpler                                   | More complex                                  |
| Code Size           | Larger (more instructions)                | Smaller (fewer, more powerful instructions)   |
| Power Consumption   | Lower                                     | Higher                                        |
| Example Processors  | ARM, MIPS, RISC-V                         | x86 (Intel, AMD)                              |

**Summary:**  
RISC uses many simple instructions, leading to fast execution and low power usage, ideal for embedded systems. CISC uses fewer, complex instructions to reduce code size, often used in desktops and servers.

---

