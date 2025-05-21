# LPR Command Practice

## What is the `lpr` Command?

The `lpr` command in Unix/Linux is used to **send files to the printer**. It stands for “line printer” and is part of the printing system used to submit print jobs to the print queue.

---

## Common `lpr` Command Usages:

- **`lpr <filename>`**  
  Sends the specified file to the default printer.

- **`lpr -P <printername> <filename>`**  
  Sends the file to a specific printer.

- **`lpr -#<number>`**  
  Prints multiple copies of the file.

- **`lpr -r <filename>`**  
  Sends the file to the printer and **removes** it after printing.

---

## Problems and Answers:

### (i) Print a File to the Default Printer
**Question:**
Print the file `document.txt`.

**Answer:**
```bash
lpr document.txt
```
### Explanation:

- `cat`: This command will simply output the contents of file1.txt.


### (ii) Print to a Specific Printer
**Question:**
Send notes.txt to a printer named printer1.
**Answer:**
```bash
lpr -P printer1 notes.txt
```
### Explanation:

- `lpr -P`: Specifies the printer to use.

### (ii) Print to a Specific Printer
**Question:**
Send notes.txt to a printer named printer1.
**Answer:**
```bash
lpr -P printer1 notes.txt
```
### Explanation:

- `lpr -P`: Specifies the printer to use.

---
