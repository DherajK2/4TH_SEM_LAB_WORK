# Comm Command Practice

## File Contents(Take 2 sorted files):
### file1.txt:
```bash
apple
banana
grape
mango
orange
```

### file2.txt:
```bash
banana
cherry
grape
lemon
orange
```
## What is the `comm` Command?

The comm command is used to compare two sorted files line by line. It outputs three columns:

1.Lines only in the first file

2.Lines only in the second file

3. Lines common to both files
---



### Common `comm` Command Options:

- **`comm filename1 filename2`**: Compares two sorted files line by line and displays three columns:
  - Lines only in `filename1`
  - Lines only in `filename2`
  - Lines common to both files

- **`comm -1 filename1 filename2`**: Suppresses column 1 (lines only in `filename1`). Displays:
  - Lines only in `filename2`
  - Lines common to both files

- **`comm -23 filename1 filename2`**: Suppresses columns 2 and 3. Displays:
  - Only the lines unique to `filename1`

> ⚠️ **Note**: Input files **must be sorted** before using `comm`. Use `sort filename > sorted_filename` to ensure proper format.



## Problems and Answers:

### (i) Compare Two Sorted Files — Show All Three Columns
**Question:**
Compare `file1.txt` and `file2.txt` using the default `comm` command.


**Answer:**
```bash
comm file1.txt file2.txt
```

### Explanation:

- No options are used. The output will show:

- Column 1: Unique to file1.txt

- Column 2: Unique to file2.txt

- Column 3: Common lines

---


### (ii)Suppress Lines Unique to the First File (-1)
**Question:**
Display only lines from `file2.txt` and the common lines (suppress column 1).



**Answer:**
```bash
comm -1 file1.txt file2.txt
```

### Explanation:

- -1: Suppresses column 1 (unique to file1.txt).


### (iii)Show Only Common Lines Between the Two Files (-23)
**Question:**
Show only the lines that are common between `file1.txt` and `file2.txt`.




**Answer:**
```bash
comm -23 file1.txt file2.txt
```

### Explanation:

- -2: Suppresses column 2 (unique to file2.txt)

- -3: Suppresses column 3 (unique to file1.txt)

- Combined, -23 shows only the common lines (column 3).






