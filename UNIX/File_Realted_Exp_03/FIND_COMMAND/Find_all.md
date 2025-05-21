# 🔍 `find` Command in Linux

The `find` command is used to **search for files and directories** in a directory hierarchy. It supports powerful options to filter results by name, type, case sensitivity, and more.

---

### `find` Command:

- **`find . -name <pattern>`**: Searches for files or directories in the current directory and subdirectories that match the **case-sensitive** pattern.  
  Example: `find . -name "*.txt"` — Finds all `.txt` files with exact case.

- **`find . -iname <pattern>`**: Same as `-name`, but **case-insensitive**.  
  Example: `find . -iname "*.TXT"` — Matches `.txt`, `.Txt`, `.TXT`, etc.

- **`find . -type f`**: Finds all **regular files** in the current directory and its subdirectories.

- **`find . -type d`**: Finds all **directories** under the current directory.

- **`find . -name "*.txt"`**: Finds all files ending with `.txt` (case-sensitive) starting from the current directory.

---
## ✅ Setup: Create Files and Directories

```bash
# Create base folder and move into it
mkdir find_demo_simple
cd find_demo_simple

# Create two directories
mkdir dirA dirB

# Create .txt files in both directories
touch file1.txt
touch dirA/file2.txt dirA/file3.txt
touch dirB/file4.txt dirB/README.TXT


```

## 📁 Folder Structure:
```bash
find_demo_simple/
├── file1.txt
├── dirA/
│   ├── file2.txt
│   └── file3.txt
└── dirB/
    ├── file4.txt
    └── README.TXT

```

## 🔍 find Command Examples

All examples below assume you're inside the find_demo directory, and use . to represent the current directory.

**Question1:**
find . -name <pattern>

Find files and directories with an exact name match (case-sensitive).
**Answer:**
```bash
find . -name "file1.txt"
```
### Output
```bash
./file1.txt
./dirB/file4.txt
./dirA/file2.txt
./dirA/file3.txt
```

**Question2:**
find . -iname "*.txt"

Find .txt files (case-insensitive).

**Answer:**
```bash
find . -name "file1.txt"
```
### Output
```bash
./file1.txt
./dirB/file4.txt
./dirB/README.TXT
./dirA/file2.txt
./dirA/file3.txt
```


**Question3:**
find . -type f

Find all files.

**Answer:**
```bash
find . -type f
```
### Output
```bash
./file1.txt
./dirB/file4.txt
./dirB/README.TXT
./dirA/file2.txt
./dirA/file3.txt
```


**Question4:**
find . -type d

Find all directories.

**Answer:**
```bash
find . -type d
```
### Output
```bash
.
./dirB
./dirA
```

---
