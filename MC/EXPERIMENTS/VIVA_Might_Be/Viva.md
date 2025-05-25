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
- The line `DCD 0x20000000` initializes the **stack pointer** to `0x20000000`, which is the start of **RAM**.

So:
- **Code memory (Flash)** starts at `0x00000000`  
- **RAM** starts at `0x20000000` (used for stack and variables)

---

## 6. If R0 Stores `0x00000002`, Can It Store That?

Yes.

- ARM registers like `R0` are **32-bit general-purpose registers**.  
- They can store values from `0x00000000` to `0xFFFFFFFF` (unsigned) or `-2,147,483,648` to `+2,147,483,647` (signed).  
- `0x00000002` (decimal 2) is well within that range.

---

## 7. RISC vs CISC Architecture

| Feature             | RISC (Reduced Instruction Set Computer)   | CISC (Complex Instruction Set Computer)       |
|---------------------|-------------------------------------------|-----------------------------------------------|
| Instruction Set     | Small and simple                          | Large and complex                             |
| Execution Speed     | Fast – often one instruction per cycle    | Slower – may take multiple cycles             |
| Complexity          | Simpler hardware, complexity in software  | Complex hardware, simpler software            |
| Code Size           | Larger                                    | Smaller                                       |
| Power Consumption   | Lower                                     | Higher                                        |
| Example Processors  | ARM, MIPS, RISC-V                         | Intel x86, AMD                                |

**Summary**:  
RISC uses many simple instructions for faster execution and lower power, ideal for embedded systems.  
CISC uses fewer, more powerful instructions, leading to compact code, better for general-purpose computers.

---

## 8. Microprocessor vs Microcontroller

| Feature                        | Microprocessor (MP)                                          | Microcontroller (MC)                                         |
|--------------------------------|---------------------------------------------------------------|---------------------------------------------------------------|
| **Definition**                | Heart of a computer system                                    | Heart of an embedded system                                   |

| **Architecture**            | Von Neumann (shared program & data memory)                    | Harvard (separate program & data memory)                      |

| **Integration**              | Only the processor; requires external components              | Processor + memory + I/O integrated on a single chip          |
| **Hardware Requirement**     | Needs more external components                                | Needs fewer external components                               |
| **Cost**                     | Higher due to external parts                                  | Lower as most components are built-in                         |
| **Power Consumption**        | High (not suitable for battery-powered systems)               | Low (ideal for battery-powered systems)                       |
| **Applications**             | Used in PCs, laptops                                          | Used in embedded systems like washing machines, MP3 players   |
| **Examples**                 | Intel 8086, Pentium series                                    | Intel 8051, ARM Cortex-M series                               |

---
