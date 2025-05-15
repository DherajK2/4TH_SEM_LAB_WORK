# 🗓 AWK Script: Format and Validate Date (Simplified)

## ✅ Problem Statement

Write an AWK script that:

- Accepts a date in the format `dd-mm-yy`
- Validates that the date is correctly formatted and logically valid
- Displays the date in the format:  
  **Month Day, Year**  
  Example: `May 16, 2025`
- Displays a suitable error message for invalid inputs

---

## 📁 Step 1: Create the AWK Script

Save the following content in a file named `format_date.awk`:

```awk
BEGIN {
    if (ARGC != 2) {
        print "Usage: awk -f format_date.awk dd-mm-yy"
        exit 1
    }

    split(ARGV[1], d, "-")
    delete ARGV[1]

    if (length(d[1]) != 2 || length(d[2]) != 2 || length(d[3]) != 2) {
        print "Invalid format. Use dd-mm-yy."
        exit 1
    }

    day = d[1] + 0
    month = d[2] + 0
    year = d[3] + 0

    if (day < 1 || day > 31 || month < 1 || month > 12) {
        print "Invalid date values."
        exit 1
    }

    months = "January February March April May June July August September October November December"
    split(months, m)

    printf "%s %d, 20%02d\n", m[month], day, year
}
```

## ▶️ Step 2: Run the Script
```bash
awk -f format_date.awk 16-05-25
```

### ✅ Output:
```bash
May 16, 2025
```


## ❌ Examples of Invalid Inputs
### Input with out-of-range values:
```bash
awk -f format_date.awk 99-99-99
```

#### Output:
```bash
Invalid date values.
```

### Input with wrong format (not 2-digit day/month):
```bash
awk -f format_date.awk 1-5-25
```
#### Output:
```bash
Invalid format. Use dd-mm-yy.

```



