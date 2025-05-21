### `more` Command:

- **`more <filename>`**: Displays the contents of a file one screen at a time.

- **`more -c <filename>`**: Clears the screen before displaying each page (instead of scrolling).

- **`more -U <filename>`**: Disables underlining (shows text without underline formatting).

- **`more -W <filename>`**: Forces line wrapping even if the terminal is narrower than the text.

- **`more -s <filename>`**: Squeezes multiple blank lines into a single blank line when displaying.

- **`more +<number> <filename>`**: Starts displaying the file from the specified line number.  
  Example: `more +20 file.txt` starts from line 20.

---

### 🛠️ Setup: Create a Sample File
```bash
seq 1 50 > sample.txt
```
### Explanation:

- Creates a file sample.txt with numbers 1 through 50 on separate lines.

---

## 🧰 `more` Command Options:
**Question:**
more sample.txt
Displays the content of sample.txt one page at a time.

**Answer:**
```bash
more sample.txt
```


**Question:**
more -c sample.txt

Clears the screen before displaying each page (cleaner view).
**Answer:**
```bash
more -c sample.txt
```


**Question:**
more -s sample.txt

Squeezes multiple blank lines into one. Useful when reading messy files.

**Answer:**
```bash
more -s sample.txt
```

**Question:**
more +10 sample.txt

Starts viewing from line 10 of the file.

**Answer:**
```bash
more +10 sample.txt
```

