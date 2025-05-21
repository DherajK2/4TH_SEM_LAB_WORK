# 📁 File Pathnames & Directory Navigation in Linux

## 📌 What Is a Pathname?

A **pathname** specifies the location of a file or directory in the filesystem.

### 🔹 Absolute Pathname
- Starts from the root `/`
- Always points to the same location
- Example: `/home/user/usr/staff/adams`

### 🔹 Relative Pathname
- Relative to the **current working directory**
- Depends on where you currently are
- Example: `../eve/file3.txt`

---

## 🏗️ Create the Folder Structure

```bash
mkdir -p ~/Home/usr
mkdir -p ~/Home/dev
mkdir -p ~/Home/usr/staff/adams/reports
mkdir -p ~/Home/usr/staff/eve
touch ~/Home/usr/staff/eve/file3.txt
```

## Final Structure:
```bash
Home/
├── dev/
├── usr/
│   └── staff/
│       ├── adams/
│       │   └── reports/
│       └── eve/
│           └── file3.txt
```
---

## 🧭 Navigating the File System
### Let’s assume your current working directory is:

```bash
cd ~/Home/usr/staff/adams
```

**Question:**
Using . – Current Directory


**Answer:**
```bash
cd .
```
### Explanation:

- `cd .`: Stays in the current directory.


**Question:**
Using .. – Go Up One Level

**Answer:**
```bash
cd ..
```
### Explanation:

- `cd ..`: Moves from adams to staff.
- 
**Question:**
Using ~ – Home Directory

**Answer:**
```bash
cd ~
```
### Explanation:

- `cd ~`: Takes you to your home directory (e.g., /home/dherajk).

**Answer:**
```bash
cd ~/Home/usr/staff/eve
ls
```

### Explanation:

- ➡️ Lists file3.txt

**Question:**
Absolute Path to Reach file3.txt

**Answer:**
```bash
cd /home/username/Home/usr/staff/eve
```


**Question:**
Relative Path: From adams to file3.txt
**Answer:**
```bash
cd ~/Home/usr/staff/adams
```

#### Then move relatively to file3.txt:
```bash
cd ../eve
ls
```
### Explanation (You’ll see:):

```bash
file3.txt
```


**Question:**
From adams/reports to eve (Navigate up two levels and enter eve)
**Answer:**
```bash
cd ~/Home/usr/staff/adams/reports
```

#### To get to file3.txt in eve, use this relative path:
```bash
cd ../../eve
```

---





