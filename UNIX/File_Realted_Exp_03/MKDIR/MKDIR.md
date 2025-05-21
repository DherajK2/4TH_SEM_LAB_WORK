# 🗂️ `mkdir` Command in Linux

The `mkdir` (make directory) command is used to create directories in Linux/Unix-based systems. It also offers a few useful options for creating directories with specific permissions or creating parent directories if they do not exist.

---

### Common `mkdir` Command Usage:

- **`mkdir <dirname>`**: Creates a new directory with the specified name.

- **`mkdir -p <path>`**: Creates parent directories as needed. For example, `mkdir -p a/b/c`.

- **`mkdir -m <mode> <dirname>`**: Sets the permission mode for the new directory. For example, `mkdir -m 755 mydir`.
---

**Question:**
Create a dir
**Answer:**
```bash
mkdir dir1
```

### Explanation:

- `mkdir `: Create a Directory


**Question:**
mkdir -p <path>
**Answer:**
```bash
mkdir -p /home/user/projects/dir1/subdir
```

### Explanation:

- `mkdir -p`: This command will create the subdir inside dir1, and if dir1 or projects do not exist, it will create them as well.

- Use Case: When you need to create a nested directory structure without worrying about whether the parent directories already exist.


**Question:**
mkdir -m <mode> <directory_name>
The -m option allows you to set permissions for the newly created directory using a mode (similar to chmod). You specify the permissions in numeric format (e.g., 755 or 777) or symbolic format (e.g., u+rwx).


**Answer:**
```bash
mkdir -m 755 dir2
mkdir -m u=rwx,g=rx,o= dir3

```

### Explanation:

- `mkdir -m 755 dir2`: This will create dir2 with 755 permissions (read, write, and execute for the owner, and read and execute for others).

- `mkdir -m u=rwx,g=rx,o= dir3`: This will create dir3 with the following permissions:

Owner (u) gets read, write, and execute permissions.

Group (g) gets read and execute permissions.

Others (o) get no permissions.

---


