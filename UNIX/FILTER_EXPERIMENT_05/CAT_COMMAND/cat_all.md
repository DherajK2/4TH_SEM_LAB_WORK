# CAT Command Practice

## File Contents:
### file1.txt:
```bash
Hello World
This is file1

Third line here
```

### file2.txt:
```bash
Line with  tab
Second line
```

### file3.txt:
```bash
Normal line
Control char:\ox
Another line


leave blank space
```

## What is the `cat` Command?

The cat command in Unix/Linux is used to display the contents of a file or concatenate files. It also has several options that modify how the output is displayed. 
Here's a breakdown of the options you asked about:
### Common `cat` Command Options:

- **`cat <filename>`**: Displays the contents of the specified `<filename>`.

- **`cat > <filename>`**: Redirects the output to a file, overwriting its contents. It will take user input until `Ctrl+D` is pressed to end the input.

- **`cat -e <filename>`**: Displays the contents of `<filename>`, appending `$` at the end of each line to represent line endings.

- **`cat -n <filename>`**: Displays the contents of `<filename>`, numbering all the lines.

- **`cat -t <filename>`**: Displays the contents of `<filename>`, showing tabs as `^I` and printing non-printing characters in a visible form.

- **`cat -v <filename>`**: Displays the contents of `<filename>`, showing non-printing characters (except for line breaks) as visible characters.

- **`cat -s <filename>`**: Suppresses repeated empty lines, displaying a single empty line instead of multiple consecutive empty lines.


---

## Problems and Answers:

### (i) Displaying the Contents of a File (Simple Display).
**Question:**
Display the contents of `file1.txt`.
**Answer:**
```bash
cat file1.txt
```

### Explanation:

- `cat`: This command will simply output the contents of file1.txt.

### (ii) Redirect Output to a New File.
**Question:**
Redirect the output of `file1.txt` to a new file called `output.txt`.


**Answer:**
```bash
cat file1.txt > output.txt
```
### Explanation:

- `>`: The > operator is used to redirect the content of file1.txt to output.txt.

### (iii) Takes user input as for new file
**Question:**
Takes user input as for new file

**Answer:**
```bash
cat > output1.txt
```
### Explanation:

- `cat > output1.txt`: Take user input from keyboard ctrl+D to save

### (iv) Display the Contents of a File with `$` at the End of Each Line (-e).
**Question:**
Display the contents of file2.txt with `$` symbols indicating the end of each line.

**Answer:**
```bash
cat -e file2.txt
```

### Explanation:

- `e`: The $ symbol will be displayed at the end of each line to show where each line ends.

### (v) Number the Lines of a File (-n).
**Question:**
Display the contents of file1.txt with line numbers.

**Answer:**
```bash
cat -n file1.txt
```

### Explanation:

- -n: Numbers the lines of the output.

### (vi) Display Tabs as ^I and Other Control Characters (-t).
**Question:**
Display the contents of file2.txt, showing tabs as ^I and non-printing characters.

**Answer:**
```bash
cat -t file2.txt
```

### Explanation:

- -t: Shows tabs as ^I and non-printing characters as visible control characters.

### (vii) Display Non-Printable Characters (-v).
**Question:**
Display the contents of file3.txt, making non-printing characters visible.

**Answer:**
```bash
cat -v file3.txt
```

### Explanation:

- -v: Shows non-printing characters like control characters in a visible form.


### (viii) Squeeze Multiple Blank Lines (-s).
**Question:**
Display the contents of file1.txt and remove extra blank lines (if any).

**Answer:**
```bash
cat -s file1.txt
```

### Explanation:

- -s: Squeezes (removes) multiple blank lines, displaying only one blank line if there are consecutive empty lines.

