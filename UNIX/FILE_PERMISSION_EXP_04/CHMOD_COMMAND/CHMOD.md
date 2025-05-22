# 🔐 `chmod` Command in Linux/Unix

The `chmod` command is used to **change file permissions** using either **symbolic** or **numeric (octal)** notation.

---

## 🧭 File Permission Basics

Each file has permissions for:
- **User (u)** → the owner
- **Group (g)** → users in the group
- **Others (o)** → everyone else

Each category can be assigned:
- `r` → read
- `w` → write
- `x` → execute

---


### Common `chmod` Command Usage:

- **`chmod [permissions] file`**: Changes the access permissions of a file or directory.

#### Symbolic Mode:

- **`chmod u+x file`**: Adds execute permission for the user (owner).
- **`chmod g-w file`**: Removes write permission from the group.
- **`chmod o=r file`**: Sets read-only permission for others.
- **`chmod a+x file`**: Adds execute permission for all (user, group, others).
- **`chmod ug=rw file`**: Sets read and write permission for user and group.

#### Octal Mode:

- **`chmod 777 file`**: Read, write, and execute for user, group, and others.
- **`chmod 755 file`**: Full access for user, read and execute for group and others.
- **`chmod 644 file`**: Read and write for user, read-only for group and others.
- **`chmod 600 file`**: Read and write for user only, no access for group and others.

---


## 🔣 1. **Symbolic Mode Syntax**

```bash
chmod [who][operator][permission] filename
```

---

##🔹 Who:
u – user

g – group

o – others

a – all (user + group + others)

🔹 Operators:
+ → add permission

- → remove permission

= → set exact permission (replaces existing)
---

### 🧪 Symbolic Examples:


```bash
chmod u=rwx file.txt         # User gets rwx (replaces existing)
chmod g-rwx file2.txt         # Remove all permissions from group
chmod o=r-x file3.txt         # Others: read and execute only
chmod u+x file4.txt           # Add execute for user
chmod a+rw file5.txt          # Add read & write to everyone
chmod ug=rw file6.txt         # User & group get read & write
chmod o= file7.txt            # Remove all permissions from others
chmod u=r,go= file8.txt       # User gets read; group & others get nothing
```

### 🔢 2. Octal (Numeric) Mode:
Each permission has a number:

`r = 4`

`w = 2`

`x = 1`

Add them to get values:

`7 = rwx`

`6 = rw-`

`5 = r-x`

`4 = r--`

`3 = -wx`

`2 = -w-`

`1 = `--x`

`0 = ---`

#### For octal
```bash
chmod 755 script.sh     # u=rwx, g=rx, o=rx
chmod 644 file.txt      # u=rw, g=r, o=r
chmod 700 secret.txt    # u=rwx, g=---, o=---
chmod 600 config.txt    # u=rw, g=---, o=---
chmod 000 locked.txt    # No permissions for anyone
```

#### Note 🗒️
Use `ls -l` after each command to check  
