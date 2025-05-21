# 📂 LS Command Practice

The `ls` command is used to **list directory contents** in Unix/Linux systems. It has many useful options to control how files and directories are displayed.

---

## 🛠️ Setup: Create Sample Files and Directories

First, run the following commands to create a sample environment:

```bash
touch file1.txt file2.txt file3.txt
mkdir dir1 dir2
touch dir1/nested1.txt
touch dir2/nested2.txt
```

## Common `ls` Command Options:

### Common `ls` Command Options:

- **`ls`**: Display all the files and directory present in current working directory
- 
- **`ls -l`**: Displays the contents in a long listing format, including file permissions, ownership, size, and modification date.

- **`ls -r`**: Reverses the order of the listing (e.g., files listed from Z to A instead of A to Z).

- **`ls -u`**: Sorts files by last access time instead of the default modification time.

- **`ls -n`**: Displays the long listing format with numeric user and group IDs instead of their names.

- **`ls -R`**: Recursively lists all files and subdirectories within the current directory.

- **`ls -p`**: Appends a `/` after directory names to visually distinguish them from files.

- **`ls -i`**: Shows the inode number of each file. Inodes are unique identifiers for files in the filesystem.

- **`ls -t`**: Sorts files by modification time, with the most recently modified files listed first.


---

### File Structure :
```bash
.
├── file1.txt
├── file2.txt
├── file3.txt
├── dir1/
│   └── nested1.txt
└── dir2/
    └── nested2.txt
```

**Question:**
ls -l
Displays a long listing format showing permissions, ownership, file size, and modification time.

**Answer:**
```bash
ls -l
```
### Output expected:
```bash
total 0
drwxr-xr-x  3 dherajk  staff  96 May 21 23:06 dir1
drwxr-xr-x  3 dherajk  staff  96 May 21 23:06 dir2
-rw-r--r--  1 dherajk  staff   0 May 21 23:06 file1.txt
-rw-r--r--  1 dherajk  staff   0 May 21 23:06 file2.txt
-rw-r--r--  1 dherajk  staff   0 May 21 23:06 file3.txt
```

### Explanation:


| Column | Description |
|--------|-------------|
| 1️⃣ Permissions | `drwxr-xr-x` = type + read/write/execute for user/group/others |
| 2️⃣ Links | Number of hard links |
| 3️⃣ Owner | File owner's username |
| 4️⃣ Group | File owner's group |
| 5️⃣ Size | File size in bytes |
| 6️⃣ Date | Last modified date & time |
| 7️⃣ Name | File or directory name |

### 🔤 Permissions Breakdown (`drwxr-xr-x`)
- `d` = directory, `-` = file
- `r` = read, `w` = write, `x` = execute
- Groups of 3: user / group / others

Example: `rwxr-xr-x`  
→ user: all, group: read+execute, others: read+execute
---



**Question:**
ls -r
Reverses the default sort order.
**Answer:**
```bash
ls -r
```
### Output expected:
```bash
file3.txt  file2.txt  file1.txt  dir2  dir1

```

**Question:**
ls -u
Sorts the files by last access time.

**Answer:**
```bash
ls -u
```
### Output expected:
```bash
dir1		dir2		file1.txt	file2.txt	file3.txt
```

**Question:**
ls -n
Displays long listing format with numeric UID and GID instead of names.
**Answer:**
```bash
ls -n
```
### Output expected:
```bash
total 0
drwxr-xr-x  3 501  20  96 May 21 23:06 dir1
drwxr-xr-x  3 501  20  96 May 21 23:06 dir2
-rw-r--r--  1 501  20   0 May 21 23:06 file1.txt
-rw-r--r--  1 501  20   0 May 21 23:06 file2.txt
-rw-r--r--  1 501  20   0 May 21 23:06 file3.txt
```


**Question:**
ls -p
Appends a / to directory names.

**Answer:**
```bash
ls -p
```
### Output expected:
```bash
dir1/		dir2/		file1.txt	file2.txt	file3.txt
```

**Question:**
ls -i
Shows the inode number for each file or directory.

**Answer:**
```bash
ls -i
```
### Output expected:
```bash
26939577 dir1		26939572 file1.txt	26939574 file3.txt
26939578 dir2		26939573 file2.txt
```

**Question:**
ls -R
Recursively lists all files and directories under the current directory.

**Answer:**
```bash
ls -R
```
### Output expected:
```bash
dir1		dir2		file1.txt	file2.txt	file3.txt

./dir1:
nested1.txt

./dir2:
nested2.txt
```

**Question:**
ls -1
To list in a single vertical column
**Answer:**
```bash
ls -1
```
### Output expected:
```bash
dir1
dir2
file1.txt
file2.txt
file3.txt
```




