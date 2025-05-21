# UNAME Command Practice

## What is the `uname` Command?

The `uname` command in Unix/Linux is used to display basic information about the system, such as the kernel name, version, and other system details.

---

## Common `uname` Command Options:

- **`uname`**  
  Displays the name of the operating system.

- **`uname -a`**  
  Displays all system information.

- **`uname -n`**  
  Displays the network node (hostname) of the system.

- **`uname -s`**  
  Displays the kernel name (operating system name).

- **`uname -r`**  
  Displays the kernel version.

- **`uname -sr`**  
  Displays the kernel name and its version.

---

## Problems and Answers:

### (i) Display the Operating System Name
**Question:**
Show the name of the operating system.

**Answer:**
```bash
uname
```

### Explanation:

- `uname`: Outputs the name of the operating system, like "Linux" or "Darwin".


### (ii) Display All System Information
**Question:**
Display all available system information.

**Answer:**
```bash
uname -a
```

### Explanation:

- `uname -a`: Displays all system details, including the OS, kernel version, machine type, and more.

### (iii) Display the Hostname
**Question:**
Show the system’s network node (hostname).

**Answer:**
```bash
uname -n
```

### Explanation:

- `uname -n`: Outputs the system's hostname.

### (iv) Display the Kernel Name
**Question:**
Show the kernel name of the operating system.

**Answer:**
```bash
uname -s
```

### Explanation:

- `uname -s`: Displays the kernel name (e.g., "Linux").


### (v) Display the Kernel Name
**Question:**
Show the kernel name of the operating system.

**Answer:**
```bash
uname -r
```

### Explanation:

- `uname -r`: Shows the kernel version, like "23.5.0".

### (vi) Display the Kernel Name and Version
**Question:**
Show both the kernel name and version.


**Answer:**
```bash
uname -sr
```

### Explanation:

- `uname -sr`: Combines the kernel name and version in one output. "Darwin 23.5.0"
---


