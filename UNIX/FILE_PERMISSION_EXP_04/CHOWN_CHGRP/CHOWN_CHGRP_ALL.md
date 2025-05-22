# 🏷️ `chown` Command in Linux/Unix

The `chown` (change owner) command is used to **change the ownership** of a file or directory. It allows you to change both the **user** and the **group** of a file.

## 📝 Syntax:
```bash
chown [options] [user][:group] file
```

### Common `chown` and `chgrp` Command Usage:

#### **`chown` Command:**

- **`chown [owner] file`**: Changes the owner of a file or directory.

- **`chown [owner]:[group] file`**: Changes both the owner and the group of a file or directory.

- **`chown [owner]`**: Changes the owner of a file or directory, leaving the group unchanged.

#### **`chgrp` Command:**

- **`chgrp [group] file`**: Changes the group of a file or directory.

---

### Examples:

| **Command** | **Description** | **Example** |
|-------------|-----------------|-------------|
| **`chown`** | Changes the owner of a file or directory. | `chown john file.txt` |
| **`chown`** | Changes the owner and the group of a file or directory. | `chown john:admin file.txt` |
| **`chgrp`** | Changes the group of a file or directory. | `chgrp admin file.txt` |

---

### Explanation:

- **`chown`**: Allows you to change the file's owner and optionally the group.
  - `chown [user] file.txt`: Changes the file owner to the specified user.
  - `chown [user]:[group] file.txt`: Changes both the owner and the group.
  
- **`chgrp`**: Changes only the group of the file or directory, without modifying the owner.
  - `chgrp [group] file.txt`: Changes the group of the file to the specified group.

---
