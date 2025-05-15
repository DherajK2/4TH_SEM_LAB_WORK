# 🧮 AWK Script: Compute Gross Salary of Employees

## ✅ Problem Statement

Write an AWK script to compute the **Gross Salary** of employees using the following rules:

- If **Basic Salary < 10000**:
  - HRA = 15% of Basic
  - DA = 45% of Basic
- If **Basic Salary ≥ 10000**:
  - HRA = 20% of Basic
  - DA = 50% of Basic

The script should output each employee's **name**, **basic salary**, and **gross salary**.

---

## 📂 Step 1: Create Folder and Input File

Create a folder and add a file called `employees.txt`.

### 📁 Terminal Commands

```bash
mkdir -p awk_demo
cd awk_demo

cat > employees.txt <<EOF
John 9500
Alice 12000
Raj 8500
Nina 10000
EOF
```

### 📁 Contents of employees.txt
```bash
John 9500
Alice 12000
Raj 8500
Nina 10000
```





## 📂 Step 2: Create AWK Script

```bash
cat > gross_salary.awk <<'EOF'
{
    name = $1
    basic = $2
    if (basic < 10000) {
        hra = 0.15 * basic
        da = 0.45 * basic
    } else {
        hra = 0.20 * basic
        da = 0.50 * basic
    }
    gross = basic + hra + da
    printf "%s\tBasic: %.2f\tGross: %.2f\n", name, basic, gross
}
EOF
```


## ▶️ Step 3: Run the AWK Script
```bash
awk -f gross_salary.awk employees.txt
```


## 📤 Sample Output
```bash
John	Basic: 9500.00	Gross: 13300.00
Alice	Basic: 12000.00	Gross: 20400.00
Raj	Basic: 8500.00	Gross: 11900.00
Nina	Basic: 10000.00	Gross: 17000.00
```

