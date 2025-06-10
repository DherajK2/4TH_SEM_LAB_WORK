# CIE 1 – Relational Algebra Questions and Answers

## Given Relational Schema

- **Faculty (FacID, Name, Dept_Name, Salary, Experience)**
- **Section (Course_code, Section_No, Sem, Year, Room_No, FacID)**

---

### i) List the details of faculty who work in Information Science Department. [1M]

```relational-algebra
σ Dept_Name = 'InformationScience' (Faculty)
```
### ii) Find the names of the faculty who earn more than 30,000 salary in Computer Science department. [1M]

```relational-algebra
π Name (σ Dept_Name = 'ComputerScience' ∧ Salary > 30000 (Faculty))
```

### iii) Retrieve the list of all courses taught in the Even 2020 and Odd 2021 semesters. [1M]
If `Sem` is numeric (e.g., 1, 2...):

```relational-algebra
π Course_code (σ ((Sem % 2 = 0 ∧ Year = 2020) ∨ (Sem % 2 = 1 ∧ Year = 2021)) (Section))
```

If `Sem` is a string (e.g., 'even', 'odd'):

```relational-algebra
π Course_code (σ ((Sem = 'even' ∧ Year = 2020) ∨ (Sem = 'odd' ∧ Year = 2021)) (Section))
```
### iv) List the Courses offered in even semester 2020 but not in odd semester 2022. [1M]

```relational-algebra
π Course_code (σ Sem % 2 = 0 ∧ Year = 2020 (Section)) −  π Course_code (σ Sem % 2 = 1 ∧ Year = 2022 (Section))
```

### v)  Find the faculty who is having more than 15 years of teaching experience in Mechanical Department. [1M]
```relational-algebra
σ Dept_Name = 'Mechanical' ∧ Experience > 15 (Faculty)
```

### vi) Retrieve the department names of faculty members who have more than 10 years of experience and are teaching a course in semester 6. [1M]

```relational-algebra
π Dept_Name (σ Experience > 10 ∧ Sem = 6 (Faculty ⋈ Section))
```



