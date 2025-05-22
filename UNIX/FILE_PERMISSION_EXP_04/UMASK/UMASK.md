# 🛠️ `umask` Command in Linux/Unix

The `umask` command is used to set **default permissions** for newly created files and directories. It determines which permissions are **not** assigned to new files and directories.

The `umask` is a **mask** that **removes** permissions, meaning it sets which permissions **should not** be granted by default.

---

## 📜 Default Permissions

- **Files**: Typically, new files are created with **666** permissions (read/write for user, group, and others).
- **Directories**: Typically, new directories are created with **777** permissions (read/write/execute for user, group, and others).

---

## 🔢 Understanding `umask` Values

The `umask` value is subtracted from the **default permissions** (666 for files and 777 for directories). This result is the **effective permissions**.

umask <numbers> from now on all the default values will be reset 

Here are some examples:

### Example `umask` values and resulting permissions:

| **umask** | **Directory Permissions** | **File Permissions** |
|-----------|---------------------------|----------------------|
| `000`     | `777` (rwxrwxrwx)          | `666` (rw-rw-rw-)     |
| `011`     | `766` (rw-rw-r--)          | `666` (rw-rw-rw-)     |
| `022`     | `755` (rwxr-xr-x)          | `644` (rw-r--r--)     |

---

## 🧪 Example of `umask` Behavior

## Set the `umask` Value:
   
   ```bash
   umask <numbers>
```

** Question:**
Example 1: Set `umask 000`
**Answer:**
```bash
mkdir Demo1
cd Demo1
umask 000
mkdir mydir
touch myfile.txt
ls -l

```

### Explanation:

- `umask 000`: 

Directory mydir → 777 permissions (rwxrwxrwx)

File myfile.txt → 666 permissions (rw-rw-rw-)

** Question2:**
Example 2: Set `umask 011`
**Answer:**
```bash
mkdir Demo2
cd Demo2
umask 011
mkdir mydir2
touch myfile2.txt
ls -l 

```

### Explanation:

- `umask 011`:
 
Directory mydir2 → 766 permissions (rwxrw-rw-)

File myfile2.txt → 666 permissions (rw-rw-rw-)

** Question3:**
Example 3: Set `umask 022`
**Answer:**
```bash
mkdir Demo3
cd Demo3
umask 022
mkdir mydir3
touch myfile3.txt
ls -l 

```

### Explanation:

- `umask 022`: 

Directory mydir3 → 755 permissions (rwxr-xr-x)

File myfile3.txt → 644 permissions (rw-r--r--)

---

