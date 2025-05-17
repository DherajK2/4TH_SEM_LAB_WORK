# Paste Command Practice

## File Contents:
### name.txt:
```bash
Alice
Bob
Charlie
Diana

```

### age.txt:
```bash
30
25
35
28

```
### city.txt:
```bash
New York
Los Angeles
Chicago
Houston
```
### id.txt:
```bash
1
2
3
4
```
---

## What is the `paste` Command?

The `paste` command in Unix and Linux is used to merge lines of files side by side. It can be useful for combining multiple files or columns into a single output.

### Common `paste` Command Options:

- **`paste <file1> <file2>`**: Merges the contents of `<file1>` and `<file2>` line by line, separating the contents of the files with a TAB by default.

- **`paste -d ',' <file1> <file2>`**: Merges the contents of `<file1>` and `<file2>` line by line, separating the fields with a comma `,` instead of the default TAB.

- **`paste -d '/' <file1> <file2>`**: Merges the contents of `<file1>` and `<file2>` line by line, separating the fields with a forward slash `/` instead of the default TAB.

- **`paste -s <file1>`**: Merges the contents of `<file1>` serially, i.e., combines all the lines into a single line, with the default TAB separator between the fields.

---

## Problems and Answers:

### (i) Merge the contents of all file 
**Question:**
Merge Contents of file 

**Answer:**
```bash
paste id.txt name.txt age.txt
```

### Explanation:

- `paste`: Merges the contents of all the files mentioned

### (ii) Combine Files Using a Slash `(/)` as the Delimiter.
**Question:**
Merge the files name.txt, age.txt, and city.txt with a slash (/) as the delimiter.

**Answer:**
```bash
paste -d '/' name.txt age.txt city.txt
```
### Explanation:

- `paste -d '/'`: Specifies that the columns should be separated by a `/`.


### (iv) Merge All Lines Into One Using Serial Mode `(-s)`.
**Question:**
Merge the contents of the file `name.txt` into a single line.


**Answer:**
```bash
paste -s name.txt
```
### Explanation:

- `paste -s ','`: Merges all the lines of `name.txt` into a single line, separating them by tabs.



### (v) Merge Multiple Files with Custom Separator in Serial Mode.
**Question:**
Merge the contents of name.txt, age.txt, and city.txt into a single line, with each value separated by a slash `(/)`.

**Answer:**
```bash
paste -d '/' -s name.txt age.txt city.txt
```
### Explanation:

- -s: Merges the contents into a single line.

- d '/': Uses / as the separator between columns.

---

