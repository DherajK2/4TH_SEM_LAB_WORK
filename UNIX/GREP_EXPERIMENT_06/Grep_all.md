# Grep Command Practice

## File Contents:
### file1.txt:
```bash
Hello World
this is a test
hello again
Test driven
```


### file2.txt:
```bash
Match this line
Another test line
Test ends here
testing GREP
```


### subdir/file3.txt:
```bash
subdir file with pattern
testing from subdir
Another Hello
```


## Problems and Answers:

### (i) Case Insensitive Search, Print n Specific Lines from a File.
**Question:**
Case insensitive search, Print n Specific Lines from a File.

**Answer:**
```bash
grep -i "hello" file1.txt | head -n 2
```

### Explanation:

- `-i`: Case-insensitive search.
- `head -n 2`: Displays the first 2 lines of the output.


### (ii) Displaying the Count of Number of Matches
**Question:**
Displaying the Count of Number of Matches.

**Answer:**
```bash
grep -c "test" file2.txt

```

### Explanation:
- 'c': Displays the count of matching lines.


### (iii) Display the File Names that Matches the Pattern.
**Question:**
Display the File Names that Matches the Pattern.

**Answer:**
```bash
grep -l "test" *.txt

```

### Explanation:
- 'l': Displays only the file names that match the pattern.


### (iv) Checking for the Whole Words in a File.
**Question:**
Checking for the Whole Words in a File.

**Answer:**
```bash
grep -w "test" file2.txt

```

### Explanation:
- 'w': Matches only whole words.



### (v) Displaying only the matched pattern
**Question:**
Displaying only the matched pattern

**Answer:**
```bash
grep -o "test" file2.txt

```

### Explanation:
- 'o': Displays only the matched parts of the pattern, not the entire line.

### (vi) Search Recursively for a Pattern in the Directory.
**Question:**
Search Recursively for a Pattern in the Directory.

**Answer:**
```bash
grep -r "Hello"

```

### Explanation:
- 'o': Recursively searches through the directory.


### (vii) Matching the Lines that End with a String
**Question:**
Matching the Lines that End with a String

**Answer:**
```bash
grep "GREP$" file2.txt

```

### Explanation:
- 'test$': '$' signifies that the string must appear at the end of the line.

### (viii) Inverting the Pattern Match
**Question:**
Inverting the Pattern Match

**Answer:**
```bash
grep -v "hello" file1.txt

```

### Explanation:
- 'o': Inverts the match, showing lines that do not contain the pattern.

