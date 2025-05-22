# 🖥️ `script` Command in Linux/Unix

The `script` command in Linux/Unix is used to **record a terminal session**. All input and output during the session are saved in a file, which can be reviewed later. This is useful for logging activities or capturing the session for debugging purposes.


---

### Common `script` Command Options:

The **`script`** command is used to record a terminal session. It creates a typescript file containing the session's input and output.

---

| **Option** | **Description** |
|------------|-----------------|
| **`-a`**   | Appends the output to the existing typescript file (instead of overwriting it). |
| **`-o`**   | Redirects the output to a specific file. If not specified, the default file is `typescript`. |
| **`-I`**   | Ignores the terminal's input. The session will record only the output. |
| **`-c`**   | Sends the output to the terminal, in addition to the typescript file. |
| **`-e`**   | Sets the program to run inside the script session. |

---

### Examples:

- **`script -a session.log`**: Appends the terminal session to `session.log`.
- **`script -o output.txt`**: Records the session into `output.txt`.
- **`script -I`**: Records only the output, ignoring the input.
- **`script -c 'bash'`**: Starts a new shell session (`bash`) within the `script` command and records it.
- **`script -e 'ls'`**: Runs the `ls` command and records the output.

---

### Example Workflow:

1. **Start recording a session**:
   ```bash
   script -a my_session.txt

## 📝 Syntax:
```bash
script [options] [file]
```
# Demonstrating the `script` Command in an Exam

In an exam, to demonstrate that the `script` command is working, follow these steps:

## 1. Start the `script` Command

Open your terminal (or use your SSH session if you're working remotely) and run the following command:
```bash
script session.log
```
- Script started, output file is session.log

### 2.Perform some operttions like 
```bash
echo "Hello, world!"
ls
pwd
date
```

### 3.Exit
```bash
exit
```

- Script done, file is session.log


### To check:
```bash
$ cat session.log

```
```bash
Script started on Thu May 22 14:32:45 2025
Hello, world!
Desktop  Documents  Downloads
/home/username
Thu May 22 14:32:52 UTC 2025
Script done on Thu May 22 14:32:53 2025
```


