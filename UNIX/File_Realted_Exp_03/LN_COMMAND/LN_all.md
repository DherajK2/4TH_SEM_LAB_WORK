# 🔗 `ln` Command: Hard and Symbolic Links

The `ln` command in Linux is used to create links between files. There are **two types of links**:

- **Hard Links**
- **Symbolic (Soft) Links**

---

## ✅ **Hard Links**

- **Definition**: A **hard link** is another name for an **existing file**. Both the original file and the hard link share the **same inode** and point to the same data on disk.
- **Characteristics**:
  - Hard links are **indistinguishable** from the original file. They act as **equal references** to the same content.
  - Deleting the original file does **not** delete the content if there are still other hard links referencing the same data.
  - Hard links cannot be created for **directories** (except by the root user).
  - They cannot span across different filesystems.

---

## ✅ **Symbolic (Soft) Links**

- **Definition**: A **symbolic link** (or **symlink**) is a special file that points to another file by name. It is similar to a **shortcut** or alias in other operating systems.
- **Characteristics**:
  - The symlink is a **separate file** with its own inode.
  - If the original file is deleted or moved, the symlink becomes **broken**.
  - Symbolic links **can** link across different filesystems and directories.

---



### Common `ln` Command Options:

- **`ln`**: Creates a **hard link** between two files, sharing the same inode and data.

- **`ln -s`**: Creates a **symbolic (soft) link**, which points to the original file by its path.

- **`ln -f`**: **Forces** the link creation by removing any existing destination file without prompting.

- **`ln -i`**: **Interactive** mode. Prompts the user before overwriting an existing file at the destination.

---

## 🛠️ Create Sample File for Linking

Let's create a sample file to work with:

```bash
echo "This is a test file" > original.txt

```

---

## Basic ln Command for Hard Link:



**Question1:**
`ln <source_file> <link_name>`

Create a hard link:
**Answer:**
```bash
ln original.txt hardlink.txt

```

### Explanation:

- `ln original.txt hardlink.txt`: This creates a hard link hardlink.txt pointing to the same inode as original.txt.

### Verify by running
```bash
ls -li
```
### Output --> Same inode value
```bash
total 16
26948064 -rw-r--r--  2 dherajk  staff  20 May 22 01:36 hardlink.txt
26948064 -rw-r--r--  2 dherajk  staff  20 May 22 01:36 original.txt
```

**Question2:**
ln -s <source_file> <link_name>

Create a Symbolic link:
**Answer:**
```bash
ln -s original.txt symlink.txt

```

### Explanation:

- `ln -s original.txt symlink.txt`: This creates a symbolic link symlink.txt that points to original.txt.

### Verify by running
```bash
ls -l
```
### Output --> Same inode value
```bash
total 16
-rw-r--r--  2 dherajk  staff  20 May 22 01:36 hardlink.txt
-rw-r--r--  2 dherajk  staff  20 May 22 01:36 original.txt
lrwxr-xr-x  1 dherajk  staff  12 May 22 01:41 symlink.txt -> original.txt
```

### Explanation for the above :

- The l at the beginning of lrwxr-xr-x indicates a symbolic link, and the arrow (->) shows it points to original.txt.


**Question3:**
ln -si <source_file> <link_name>

Create a Symbolic link:
**Answer:**
```bash
ln -si original.txt symlink2.txt

```

### Explanation:

- `ln -si original.txt symlink.txt`: The -i option prompts for confirmation before overwriting an existing file or symlink, ensuring you don't accidentally overwrite it.

### It will ask
```bash

replace symlink.txt? y ---> for existing file (symlink.txt)
for not existing file ---> same as -s
```

### Verify by running
```bash
ls -l
```
### Output --> Same inode value
```bash
total 16
total 16
-rw-r--r--  2 dherajk  staff  20 May 22 01:36 hardlink.txt
-rw-r--r--  2 dherajk  staff  20 May 22 01:36 original.txt
lrwxr-xr-x  1 dherajk  staff  12 May 22 01:44 symlink.txt -> original.txt
lrwxr-xr-x  1 dherajk  staff  12 May 22 01:45 symlink2.txt -> original.txt
```

---



