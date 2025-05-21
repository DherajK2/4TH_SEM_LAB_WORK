# CAL Command Practice

## What is the `cal` Command?

The `cal` command in Unix/Linux is used to display a calendar in the terminal. It can show the current month, a specific month/year, or an entire year. It also supports a variety of options to customize the calendar view.

---

## Common `cal` Command Options:

- **`cal`**: Displays the calendar of the current month.

- **`cal <year>`**: Displays the calendar for the specified year (e.g., `cal 2025`).

- **`cal <month> <year>`**: Displays the calendar for a specific month and year (e.g., `cal 5 2025` for May 2025).

- **`cal -1`**: Shows only one month. This is the default behavior.

- **`cal -3`**: Displays the previous, current, and next month in a 3-month format.

- **`cal -y`**: Shows the calendar for the entire current year.

- **`cal -m <month>`**: Displays the given month for the current year (e.g., `cal -m 7` for July).

- **`cal -B <num>`**: Shows `<num>` months *before* the current or specified month.

- **`cal -A <num>`**: Shows `<num>` months *after* the current or specified month.

- **`cal -B <num> -A <num>`**: Shows months before and after the current one.

---

## Problems and Answers:

### (i) Display Current Month's Calendar
**Question:**
Display the calendar of the current month.

**Answer:**
```bash
cal
```

### Explanation:

- `cal`: Shows the current month’s calendar by default.

### (ii) Display a Full Year Calendar
**Question:**
Show the full calendar for the year 2025.
**Answer:**
```bash
cal 2025

```

### Explanation:

- `cal 2025`: This shows all 12 months of the year 2025 in a single view.

### (iii) Display a Specific Month of a Year
**Question:**
Display May 2025.
**Answer:**
```bash
cal 5 2025

```

### Explanation:

- `cal 5 2025`: The first argument is the month (5 = May), and the second is the year.

### (iv) Display Three-Month View (Previous, Current, Next)
**Question:**
Show the calendar for the previous, current, and next month in one output.

**Answer:**
```bash
cal -3

```

### Explanation:

- `cal -3`: Displays three months – last, current, and next.

### (v)  Display Current Year Calendar
**Question:**
Show all months for the current year.

**Answer:**
```bash
cal -y

```

### Explanation:

- `cal -y`: Displays the entire current year's calendar.



### (vi)  Display a Month of the Current Year
**Question:**
Display July of the current year.

**Answer:**
```bash
cal -m 7

```

### Explanation:

- `cal -m 7`: Displays the 7th month (July) of the current year.


