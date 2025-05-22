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



# Demonstrating `script -a` and `script -r` Commands

In this guide, we will demonstrate how to use the `script` command with the `-a` and `-r` options.

## 1. `script -a`: Append to an Existing Session Log

### Purpose:
The `-a` option is used to **append** the session's output to an existing log file rather than overwriting it.

### Steps:

1. **Start the `script` command with the `-a` option** to append output to `session.log`:
    ```bash
    script -a session.log
    ```

2. **Perform some commands** that will be appended to the session log:
    ```bash
    echo "This is the first session."
    ls
    pwd
    ```

3. **Exit the session**:
    ```bash
    exit
    ```

4. **View the session log**:
    Use `cat` to display the contents of the `session.log` file and confirm that the session has been appended to the file.
    ```bash
    cat session.log
    ```

    **Expected Output:**
    ```bash
    Script started on <date>
    This is the first session.
    Desktop  Documents  Downloads
    /home/username
    Script done on <date>
    ```

5. **Start a new `script -a` session** and append more data:
    ```bash
    script -a session.log
    echo "This is the second session."
    ls
    exit
    ```

6. **View the updated session log**:
    ```bash
    cat session.log
    ```

    **Expected Output:**
    ```bash
    Script started on <date>
    This is the first session.
    Desktop  Documents  Downloads
    /home/username
    Script done on <date>

    Script started on <date>
    This is the second session.
    Desktop  Documents  Downloads
    /home/username
    Script done on <date>
    ```

---

## 2. `script -r`: Replay a Recorded Session

### Purpose:
The `-r` option is used to **replay** a previously recorded session from a log file. This allows you to view the exact terminal session as it was recorded, including any output and commands.

### Steps:

1. **Record a session** using the `script` command (if you haven't done so already):
    ```bash
    script session.log
    echo "Recording my session"
    ls
    exit
    ```

2. **Replay the recorded session** with the `-r` option:
    ```bash
    script -r session.log
    ```

    This will replay the session as it was recorded in `session.log`.

3. **Expected Output**:
    The session will be replayed, showing each command and its output as if it were executed in real-time. It will look like this:
    ```bash
    Script started on <date>
    echo "Recording my session"
    Recording my session
    ls
    Desktop  Documents  Downloads
    exit
    Script done on <date>
    ```

---

## Summary:

### `script -a`:
- **Append** to an existing log file.
- Useful for adding multiple sessions to the same log file.

### `script -r`:
- **Replay** a previously recorded session from a log file.
- Helps to review recorded sessions as if they are being executed live.

By following these steps, you can demonstrate how to append to a session log and how to replay a session using `script -a` and `script -r`.

