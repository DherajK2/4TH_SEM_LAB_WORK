# Head Command Practice

## File Contents:
### sample.txt:
```bash
Line 1
Line 2
Line 3
Line 4
Line 5
Line 6
Line 7
Line 8
Line 9
Line 10
Line 11
Line 12
```


## What is the `head` Command?

The `head` command is used to display the first few lines of a file. By default, `head` will show the first 10 lines of a file. It can also be customized to show a specific number of lines from the beginning of the file using the `-n` option.

### Common `head` Command Options:
- `head <filename>`: Displays the first `<number>` lines of the file.
- `head -n <number> <filename>`: Shows the first `<number>` lines of the specified file.

---

## Problems and Answers:

### (i) Display the First 5 Lines of a File.
**Question:**
Display the first 10 lines(DEFAULT) from `sample.txt`.

**Answer:**
```bash
head sample.txt
```

### Explanation:

- `head`: Displays the first 10 lines as default of the output.

### (ii) Display the First N Lines of a File.
**Question:**
Display the first N lines(DEFAULT) from `sample.txt`.

**Answer:**
```bash
head -n 5 sample.txt
```
### Explanation:

- `head -n 5`: Displays the first 5(n-any) lines of the output.




