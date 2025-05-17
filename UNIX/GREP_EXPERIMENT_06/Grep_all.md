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
