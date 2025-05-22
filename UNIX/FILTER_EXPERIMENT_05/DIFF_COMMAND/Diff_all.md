# Demonstrating the `diff` Command and its Options

The `diff` command is used to compare two files line by line. It shows the differences between them, which can be useful for code reviews, comparing configuration files, etc.

### Common `diff` Command Options:

The **`diff`** command compares files line by line and outputs the differences between them.

| **Option** | **Description** |
|------------|-----------------|
| **`-u`**   | Unified format. Shows a few lines of context around differences. |
| **`-c`**   | Context format. Shows a larger block of context around differences. |
| **`-i`**   | Ignores case differences (e.g., `A` and `a` are considered the same). |
| **`-w`**   | Ignores all white space differences (spaces and tabs). |
| **`-r`**   | Recursively compares directories. |
| **`-q`**   | Outputs only whether files differ, without showing the actual differences. |

---

## 1. `diff -u`: Unified Output Format

### Purpose:
The `-u` option generates a **unified diff** output. This format is commonly used in version control systems, as it shows a few lines of context around the differences for easier understanding.

### Example:

1. **Create two files for comparison**:
    ```bash
    echo "This is the first line." > file1.txt
    echo "This is the second line." >> file1.txt
    echo "This is the third line." >> file1.txt

    echo "This is the first line." > file2.txt
    echo "This is the second line." >> file2.txt
    echo "This is the fourth line." >> file2.txt
    ```

2. **Compare the files with `diff -u`**:
    ```bash
    diff -u file1.txt file2.txt
    ```

3. **Expected Output**:
    ```bash
    --- file1.txt  2025-05-22 14:00:00.000000000 +0000
    +++ file2.txt  2025-05-22 14:00:00.000000000 +0000
    @@ -1,3 +1,3 @@
     This is the first line.
     This is the second line.
    -This is the third line.
    +This is the fourth line.
    ```

---

## 2. `diff -c`: Context Diff

### Purpose:
The `-c` option generates a **context diff** output, which shows three lines of context (before and after) for each difference. This is useful when you need more context than the unified format provides.

### Example:

1. **Compare the same files with `diff -c`**:
    ```bash
    diff -c file1.txt file2.txt
    ```

2. **Expected Output**:
    ```bash
    *** file1.txt   Mon May 22 14:00:00 2025
    --- file2.txt   Mon May 22 14:00:00 2025
    ***************
    *** 1,3 ****
    --- 1,3 ----
     This is the first line.
     This is the second line.
    -This is the third line.
    +This is the fourth line.
    ```

---

## 3. `diff -i`: Ignore Case Differences

### Purpose:
The `-i` option tells `diff` to **ignore case differences** when comparing the files.

### Example:

1. **Create files with case differences**:
    ```bash
    echo "Hello World" > file1.txt
    echo "hello world" > file2.txt
    ```

2. **Compare the files with `diff -i`**:
    ```bash
    diff -i file1.txt file2.txt
    ```

3. **Expected Output**:
    No output will be shown because `diff -i` ignores case differences.
    ```bash
    (no output)
    ```

---

## 4. `diff -w`: Ignore All White Space

### Purpose:
The `-w` option tells `diff` to **ignore all white spaces** (spaces and tabs) when comparing the files.

### Example:

1. **Create files with extra spaces**:
    ```bash
    echo "Hello    World" > file1.txt
    echo "Hello World" > file2.txt
    ```

2. **Compare the files with `diff -w`**:
    ```bash
    diff -w file1.txt file2.txt
    ```

3. **Expected Output**:
    No output will be shown because `diff -w` ignores all white spaces.
    ```bash
    (no output)
    ```

---

## 5. `diff -r`: Recursively Compare Directories

### Purpose:
The `-r` option allows `diff` to **recursively compare directories**. It will compare all files in the directories and show the differences.

### Example:

1. **Create directories with files**:
    ```bash
    mkdir dir1
    mkdir dir2
    echo "File 1 in dir1" > dir1/file1.txt
    echo "File 1 in dir2" > dir2/file1.txt
    ```

2. **Compare the directories with `diff -r`**:
    ```bash
    diff -r dir1 dir2
    ```

3. **Expected Output**:
    ```bash
    diff -r dir1/file1.txt dir2/file1.txt
    1c1
    < File 1 in dir1
    ---
    > File 1 in dir2
    ```

---

## Summary:

- **`diff -u`**: Shows a unified diff, useful for version control.
- **`diff -c`**: Shows a context diff, with three lines of context around each difference.
- **`diff -i`**: Ignores case differences when comparing files.
- **`diff -w`**: Ignores all white space differences between files.
- **`diff -r`**: Compares directories recursively and shows differences between files in them.

By following these steps, you can demonstrate the usage of `diff` with various options for comparing files and directories.
