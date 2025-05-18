# WC Command Practice

## File Contents:
### file1.txt:
```bash
hello world
this is wc

```

### file2.txt:
```bash
second file here
with two lines

```

### sample.txt:
```bash
hello world
this is wc

```

## What is the `wc` Command?

The wc command is used to count lines, words, characters, and more in a file.

wc filename
This shows:

Number of lines

Number of words

Number of bytes (characters in most cases)



### Common `wc` Command Options:

- **`wc <filename>`**: Displays the number of lines, words, and bytes in the specified `<filename>`.

- **`wc -c <filename>`**: Displays the number of **bytes** in the specified file.

- **`wc -l <filename>`**: Displays the number of **lines** in the specified file.

- **`wc -w <filename>`**: Displays the number of **words** in the specified file.

- **`wc <filename1> <filename2>`**: Displays the line, word, and byte counts for both files individually and a **total** at the end.

- **`wc -l -w <filename1> <filename2>`**: Displays both the **line count** and **word count** for each specified file, omitting the byte count.


## Problems and Answers:

### (i) Display Line, Word, and Byte Count of a File
**Question:**
Display the line, word, and byte count of file1.txt.


**Answer:**
```bash
wc file1.txt
```

### Explanation:

- Default output: number of lines, words, and bytes.

### (ii) Display Byte Count Only
**Question:**
Display only the number of bytes in file2.txt.



**Answer:**
```bash
wc -c file2.txt
```

### Explanation:

- `-c`: Displays byte count (includes newlines).


### Explanation:

- Default output: number of lines, words, and bytes.

### (iii) Display Line Count Only
**Question:**
Display the number of lines in file1.txt.

**Answer:**
```bash
wc -l file1.txt
```

### Explanation:

- `-l`: Displays only line count.


### (iv) Display Word Count Only
**Question:**
Display the number of words in file2.txt.


**Answer:**
```bash
wc -w file2.txt
```

### Explanation:

- `-w`: Displays only word count.

### (v) Count for Multiple Files
**Question:**
Display line, word, and byte count for both file1.txt and file2.txt.


**Answer:**
```bash
wc file1.txt file2.txt
```

### Explanation:

- Displays line/word/byte counts for each file plus a total.


### (vi) Display Only Line and Word Count for Two Files
**Question:**
Display only line and word count for file1.txt and file2.txt.


**Answer:**
```bash
wc -l -w file1.txt file2.txt
```

### Explanation:

- Combines -l and -w options to show line and word counts only.

