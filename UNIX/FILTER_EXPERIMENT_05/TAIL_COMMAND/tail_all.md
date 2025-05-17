# Tail Command Practice

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

The tail command in Unix (and Linux) is used to display the last part of a file. By default, it shows the last 10 lines of a file, but this can be adjusted with various options.

---
### Common `tail` Command Options:

- **`tail <filename>`**: Displays the last 10 lines of the specified `<filename>`.

- **`tail -n 5 <filename>`**: Displays the last 5 lines of the specified `<filename>`.

- **`tail -n +5 <filename>`**: Displays the contents of the file starting from line 5 to the end. The `+` symbol specifies to start from line 5.

- **`tail -c 20 <filename>`**: Displays the last 20 bytes of the specified `<filename>`. Use `-c` to specify the number of bytes instead of lines.

- **`tail -r <filename>`**: Displays the contents of the file in reverse order, starting from the last line and working backwards.

- **`tail -f <filename>`**: Continuously monitors the file for new lines being added, useful for log files (the command "follows" the file as it grows).
---

## Problems and Answers:

### (i) Display the Last 10 Lines of a File.
**Question:**
Display the last 10 lines (default) of `sample.txt`.

**Answer:**
```bash
tail sample.txt
```

### Explanation:

- `head`: Displays the last 10 lines as default of the output.

### (ii) Display the Last 5(nth) Lines of a File.
**Question:**
Display the last 5 lines of `sample.txt`.

**Answer:**
```bash
tail -n 5 sample.txt
```
### Explanation:

- `tail -n 5`: Specifies that only the last 5 lines of the file should be displayed.


### (iii) Display the File Starting from Line 5(Nth).
**Question:**
Display the content of sample.txt starting from line 5.

**Answer:**
```bash
tail -n +5 sample.txt
```
### Explanation:

- `tail -n +5`: Shows the content starting from line 5 and onwards.


### (iv) Display the Last 20 Bytes of a File.
**Question:**
Display the last 20 bytes of sample.txt.

**Answer:**
```bash
tail -c 20 sample.txt
```
### Explanation:

- `tail -c 20`: Specifies that only the last 20 bytes of the file should be displayed.


### (v) Display the File Content in Reverse Order.
**Question:**
Display the lines of sample.txt in reverse order (bottom to top).

**Answer:**
```bash
tail -r sample.txt
```
### Explanation:

- `tail -r`: Reverses the order of lines in the output.



