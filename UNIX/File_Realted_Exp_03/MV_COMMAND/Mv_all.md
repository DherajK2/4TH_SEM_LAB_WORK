# 🔄 `mv` Command in Linux

The `mv` command is used to **move** or **rename** files and directories in Unix/Linux. It can also be used to overwrite files and move files to different directories.

---

### `mv` Command:

- **`mv <source> <destination>`**: Moves (or renames) a file or directory from the source to the destination.

- **`mv <file> <path>`**: Moves the specified file to the given path or directory.

- **`mv -f <source> <destination>`**: Forces the move operation and overwrites the destination file without prompting (even if the destination file is write-protected).

- **`mv -i <source> <destination>`**: Prompts for confirmation before overwriting an existing file if the source and destination files have the same name.

- **`mv <oldname> <newname>`**: Used for renaming a file or directory. The source is the current name, and the destination is the new name.
---

## ✅ Setup: Create Directories and Files

Let’s start by creating some directories and files for demonstration purposes.

### Step 1: Create Directories and Files

```bash
# Create the main directory for this example
mkdir project

# Navigate into the project directory
cd project

# Create some files
touch fileA.txt fileB.txt fileC.txt

# Create subdirectories
mkdir subdir1 subdir2

# Create files inside subdirectories
touch subdir1/file1.txt subdir2/file2.txt
```

## 📁 File Structure Before Moving/Renaming:
```bash
project/
├── fileA.txt
├── fileB.txt
├── fileC.txt
├── subdir1/
│   └── file1.txt
└── subdir2/
    └── file2.txt
```

## 🧰 Common mv Command Options


**Question1:**
mv <file> <path>

Moves a file from the current directory to a different directory.
**Answer:**
```bash
mv fileA.txt subdir1/
```

### Explanation:

- `mv fileA.txt subdir1/`: 🗂️ This will move fileA.txt to the subdir1 directory.


### 📁 File Structure After Move:
```bash
project/
├── fileB.txt
├── fileC.txt
├── subdir1/
│   ├── file1.txt
│   └── fileA.txt
└── subdir2/
    └── file2.txt
```

**Question2:**
mv -f <file> <destination>

Force move: Moves the file and overwrites the destination file without asking for confirmation,
 even if the destination file is write-protected.
**Answer:**
```bash
mv -f subdir1/fileA.txt subdir2/file2.txt
```
### Explanation:

- `mv -f subdir1/fileA.txt subdir2/file2.txt`: 🗑️ The file fileA.txt will overwrite file2.txt in the subdir2 directory without any confirmation.


### 📁 File Structure After -f:
```bash
project/
├── fileB.txt
├── fileC.txt
├── subdir1/
│   └── file1.txt
└── subdir2/
    └── fileA.txt  # Previously file2.txt is now overwritten

```



**Question3:**
mv -i <file> <destination>

Interactive move: If a file already exists in the destination, mv will ask if you want to overwrite it.


**Answer:**
```bash
mv -i fileB.txt subdir2/
```
### Explanation:

- `mv -f subdir1/fileA.txt subdir2/file2.txt`: mv: overwrite 'subdir2/fileA.txt'? y



**Question4:**
mv <file> <new_name>

You can use mv to rename a file or directory.

**Answer:**
```bash
mv fileC.txt newfileC.txt
```
### Explanation:

- `mv fileC.txt newfileC.txt`: 📝 This renames fileC.txt to newfileC.txt in the same directory.


### 📁 File Structure After Renaming:
```bash
project/
├── fileB.txt
├── newfileC.txt  # Renamed from fileC.txt
├── subdir1/
│   └── file1.txt
└── subdir2/
    └── fileA.txt

```

---



