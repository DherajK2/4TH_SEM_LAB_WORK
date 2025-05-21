# 📂 `cp` Command in Linux

The `cp` (copy) command in Linux is used to copy files and directories from one location to another. It supports several options that provide flexibility for copying files in different scenarios.

---

### `cp` Command:

- **`cp <source> <destination>`**: Copies a file or directory from the source to the destination.

- **`cp -p <source> <destination>`**: Preserves the **file attributes** (e.g., timestamps, permissions) when copying.

- **`cp -r <source> <destination>`**: Copies directories recursively, including all their contents.

- **`cp <filename> <path>`**: Copies a file to the specified path or directory.

- **`cp DirA/f* DirB`**: Copies all files starting with `f` from `DirA` to `DirB`.

---

**Question:**
Display the contents of `file1.txt`.
**Answer:**
```bash
cp file1.txt file2.txt
```

### Explanation:

- `cp file1.txt file2.txt`: This will copy the contents of file1.txt to file2.txt.
: If file2.txt --> Exist then contents of file1.txt overwritten
: If file2.txt --> Not Exist then new file automatically created named file2.txt


**Question:**
`cp -r <source> <destination>`
The -r (recursive) option is used when copying directories. It allows you to copy an entire directory and its contents.**Answer:**
```bash
cp -r dir1 dir2
```

### Explanation:

- `cp -r dir1 dir2`: This will copy the entire directory dir1 (along with all files and subdirectories inside it) to dir2.

**Question:**
cp <filename> <path>
This allows you to copy a file to a specific path or directory.

```bash
cp file1.txt /home/user/docs/
```

### Explanation:

- `cp file1.txt /home/user/docs/`: This copies file1.txt to the /home/user/docs/ directory.



**Question:**
cp dirA/f* dirB
This example copies all files from DirA that start with f to DirB. The * is a wildcard that matches any characters following f.
```bash
cp dirA/f* dirB
```

### Explanation:

- `cp dirA/f* dirB`: This copies all files in DirA that begin with the letter f (such as file1.txt, foo.txt, etc.) into the DirB directory.






