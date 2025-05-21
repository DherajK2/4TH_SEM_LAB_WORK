# ECHO Command Practice

## What is the `echo` Command?

The `echo` command in Unix/Linux is used to display a line of text or a variable value in the terminal. It's often used in shell scripts and command-line operations to show messages or output values.

---

## Common `echo` Command Usages:

- **`echo <text>`**  
  Displays the specified text on the screen.

- **`echo $VARIABLE`**  
  Displays the value of a variable.

- **`echo -n <text>`**  
  Displays text **without** a trailing newline.

- **`echo -e <text>`**  
  Enables interpretation of **backslash-escaped characters** like `\n`, `\t`, etc.

---

## Problems and Answers:

### (i) Display a Simple Message
**Question:**
Display the message "Hello World".

**Answer:**
```bash
echo Hello World
```

### Explanation:

- `echo`: Simply prints the text to the screen.

### (ii) Display Text Without a Newline
**Question:**
Display "Hello" without moving to a new line.

**Answer:**
```bash
echo -n Hello
```

### Explanation:

- `echo -n`: Prevents the automatic newline at the end of the output.

### (iii) Display Text Without a Newline
**Question:**
Display "Hello" without moving to a new line.

**Answer:**
```bash
echo -n Hello
```

### Explanation:

- `echo -n`: Prevents the automatic newline at the end of the output.

### (iv) Display Text with a New Line in Between or tab space
**Question:**
Line1
Line2
**Answer:**
```bash
echo -e "Line1\nLine2"
```

### Explanation:

- `echo -e "Line1\nLine2" `: Enables backslash escape sequences.
- `echo -e "Hello\tWorld" `: Inserts a horizontal tab between "Hello" and "World".

---
