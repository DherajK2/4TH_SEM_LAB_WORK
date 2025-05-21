### `rmdir` Command:

- **`rmdir <dirname>`**: Removes an empty directory. The directory must be empty, including no files or subdirectories inside. If it contains anything, the command will fail with an error.

---

### `vi` Command:

- **`vi <filename>`**: Opens the specified file in the `vi` text editor. If the file doesn't exist, `vi` will create it.

- **Basic Use:**
  - Press `i` to enter insert mode and start editing the file.
  - Press `Esc` to exit insert mode and return to command mode.
  - To save the file, type `:w` and press Enter.
  - To quit `vi`, type `:q` and press Enter. If you want to quit and save, type `:wq`.

**Question:**
rmdir 
**Answer:**
```bash
rmdir dir1
```

### Explanation:

- `rmdir `: Remove Empty folder dir1 , if something is there will return be error


**Question:**
vi
**Answer:**
```bash
vi Hello.txt
```

### Explanation:

- `vi filename `: This opens the file Hello.txt in the vi editor ,if not created vi will create

---



