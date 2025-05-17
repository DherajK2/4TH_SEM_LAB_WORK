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
Perform a case-insensitive search for the word "hello" and print the first 2 matching lines from `file1.txt`.

**Answer:**
```bash
grep -i "pattern" file1.txt 
```

### Explanation:

- `-i`: Case-insensitive search.
- `head -n 2`: Displays the first 2 lines of the output.


