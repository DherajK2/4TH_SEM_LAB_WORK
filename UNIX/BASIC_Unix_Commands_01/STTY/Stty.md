# STTY Command Practice

## What is the `stty` Command?

The `stty` command in Unix/Linux is used to **change and print terminal line settings**. It allows you to configure various terminal behaviors, such as input and output settings, erase and kill characters, and more.

---

## Common `stty` Command Usages:

- **`stty`**  
  Displays the current terminal settings.

- **`stty <option>`**  
  Changes a specific terminal setting.

- **`stty -a`**  
  Displays all current settings for the terminal.

- **`stty erase <char>`**  
  Defines the character used to erase a previous character (commonly backspace).

- **`stty -echo`**  
  Turns off the echoing of characters typed on the terminal (useful for password input).

- **`stty echo`**  
  Turns the echoing of characters back on.

---

## Problems and Answers:

### (i) Display Current Terminal Settings
**Question:**
View the current terminal settings.

**Answer:**
```bash
stty
```
### Explanation:

- Displays the current settings for the terminal, including line discipline, control characters, and more.


![Screenshot of the app](./UNIX/BASIC_Unix_Commands_01/SET.png)


