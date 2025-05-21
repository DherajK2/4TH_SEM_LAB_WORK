# Wildcards in Linux (Filename Pattern Matching)

Wildcards are used to match files using patterns instead of exact names. They are often used with `ls`, `rm`, `cp`, and other file-handling commands.

---

## 🔧 Step 1: Create Sample Files

Run the following to set up all the example files:

```bash
# Files for simple patterns
touch cat cap cad car cup cat1 cow city

# Files with vowel in the middle
touch cet cit cot cut

# Files with capital letters and digits
touch A1 B2 C3 D4 Z9

# Files with extensions
touch hello.txt bye.txt add.py test1.txt test2.py test3.md cap1.txt cap2.py

# Files for fa pattern
touch fa1 fa2 fa3
```
---
### (i) * – Match zero or more characters
**Question:**
Match files starting with c

**Answer:**
```bash
ls c*
```

#### Matches
```bash
cat cap cad car cup cat1 cow city cap1.txt cap2.py
```
**Question:**
Match files ending in .txt
**Answer:**
```bash
ls *.txt
```

#### Matches
```bash
hello.txt bye.txt test1.txt cap1.txt
```

**Question:**
Match all files with an extension
**Answer:**
```bash
ls *.*
```

#### Matches
```bash
hello.txt bye.txt add.py test1.txt test2.py test3.md cap1.txt cap2.py
```

---
### (ii) * – Match exactly one character
**Question:**
Match all cat, cap, cad, etc.
**Answer:**
```bash
ls ca?
```

#### Matches
```bash
cat cap cad car
```

---
### (iii) * – [] – Match one character from a set or range
**Question:**
Match files where second character is a vowel
**Answer:**
```bash
ls c[aeiou]t
```

#### Matches
```bash
cat cet cit cot cut
```


**Question:**
Match files starting with A-Z and ending with a digit

**Answer:**
```bash
ls [A-Z][0-9]
```

#### Matches
```bash
A1 B2 C3 D4 Z9
```
**Question:**
Match specific uppercase-letter + digit combinations


**Answer:**
```bash
ls [CD][34]
```

#### Matches
```bash
C3 D4
```


### (iii) 🎯 Combined Pattern Examples
**Question:**
Files starting with c and exactly 3 letters

**Answer:**
```bash
ls c???
```

#### Matches
```bash
cat cap cad car cup cow
```


**Question:**
Files starting with c and ending in .py
**Answer:**
```bash
ls c*.py
```

#### Matches
```bash
cap2.py
```

**Question:**
Files named like test1, test2 with any extension
**Answer:**
```bash
ls test*.*
```

#### Matches
```bash
test1.txt test2.py test3.md
```




