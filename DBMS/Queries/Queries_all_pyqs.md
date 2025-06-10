# 📘 Question 1 – SQL Queries in MySQL (Employee & Department Schema)

## Given Relational Schema

- **Employee (Eno, Ename, Salary, Hiredate, Job_type, Dnum)**
- **Department (Dno, Dname, Location)**

---

### i) Display the employees hired during 2021
```sql
SELECT * 
FROM Employee 
WHERE YEAR(Hiredate) = 2021;
```

### ii)Display the names and length of names of all the employees
```sql
SELECT Ename, LENGTH(Ename) AS Name_Length 
FROM Employee;

```

### iii) Display the total number of employees for each job type
```sql
SELECT Job_type, COUNT(*) AS Total_Employees 
FROM Employee 
GROUP BY Job_type;

```

### iv) Display the department that has no employee
```sql
SELECT D.Dno, D.Dname, D.Location 
FROM Department D
LEFT JOIN Employee E ON D.Dno = E.Dnum
WHERE E.Eno IS NULL;

```

### v) Display 10th highest salary in the employee table
```sql
SELECT DISTINCT Salary 
FROM Employee 
ORDER BY Salary DESC 
LIMIT 1 OFFSET 9;
```

# 📘 Question 2 – Write a SQL query to create a view of employee table hiding the salary column. Refer Q.No. 1 for schema.
```sql
CREATE VIEW Employee_Without_Salary AS
SELECT
    Eno,
    Ename,
    Hiredate,
    "Job-type", -- Enclosed in double quotes due to the hyphen
    Dnum
FROM
    Employee;
```
---

# 📘 Question 3 – Queries 
```sql
Student (Stuno, Name, Class, Major) 8
Course (CourseNo, CourseName, Credit, Department)
Section (Sid, CourseNo, Semester, Year, Instructor)
Grade Report (Stuno, Sid, Grade)
```

### i) Retrieve the names of all the courses taught by Professor Sinha in 2016 and 2021
```sql
SELECT DISTINCT c.CourseName
FROM Course c
JOIN Section s ON c.CourseNo = s.CourseNo
WHERE s.Instructor = 'Sinha'
  AND s.Year IN (2016, 2021);
```

### ii) For each section taught by Professor Navathe, retrieve the CourseNo, Semester, Year and number of students who took the section
```sql
SELECT s.CourseNo, s.Semester, s.Year, COUNT(g.Stuno) AS StudentCount
FROM Section s
LEFT JOIN GradeReport g ON s.Sid = g.Sid
WHERE s.Instructor = 'Navathe'
GROUP BY s.CourseNo, s.Semester, s.Year;

```
### iii)  Retrieve the names and major departments of all students who have a grade of A in all their courses
```sql
SELECT stu.Name, stu.Major
FROM Student stu
WHERE NOT EXISTS (
    SELECT 1
    FROM GradeReport g
    WHERE g.Stuno = stu.Stuno
    AND g.Grade <> 'A'
);

```

### iv) Retrieve the names of the student and course, which got maximum number of A grades
```sql
SELECT stu.Name
FROM Student stu
JOIN GradeReport g ON stu.Stuno = g.Stuno
WHERE g.Grade = 'A'
GROUP BY stu.Stuno, stu.Name
ORDER BY COUNT(*) DESC
LIMIT 1;

```

### v) SELECT stu.Name AS StudentName, c.CourseName, COUNT(*) AS ACount
```sql
FROM Student stu
JOIN GradeReport g ON stu.Stuno = g.Stuno
JOIN Section s ON g.Sid = s.Sid
JOIN Course c ON s.CourseNo = c.CourseNo
WHERE g.Grade = 'A'
GROUP BY stu.Stuno, stu.Name, c.CourseNo, c.CourseName
ORDER BY ACount DESC
LIMIT 1;
```

---

# 📘 Question 4 – Library_isbn Queries 
```sql
Customers(C_Id, company, First, last, street, city, state, ZIP, Tel)
Orders( Orderld, C_Id, Order Date, Ship Date, Shipping, Sales Tax)
Books(ISBN, Title, Price, Authors, Pages, PubDate, Qty)
Order Info( OrderlD, ISBN, Qty, Price)
```

### i) List all the ISBN (without repetition) for which an order was placed by the customer.
```sql
SELECT DISTINCT ISBN
FROM OrderInfo;

```

### ii) Retrieve the number of times each customer has placed an order. (Ignore if a customer has not placed any order).
```sql
SELECT C_Id, COUNT(OrderID) AS OrderCount
FROM Orders
GROUP BY C_Id;

```

### iii) Retrieve those books which have 'D' as the first character in the title and were published in the year 2019.
```sql
SELECT *
FROM Books
WHERE Title LIKE 'D%' AND YEAR(PubDate) = 2019;

```
### iv) Retrieve those books which have 'D' as the first character in the title and were published in the year 2019.
```sql
SELECT *
FROM Books
WHERE Title LIKE 'D%' AND YEAR(PubDate) = 2019;

```
### v) Set the transaction isolation level of the current session to READ UNCOMMITTED
```sql
SET SESSION TRANSACTION ISOLATION LEVEL READ UNCOMMITTED;
```
---

# Question 5: SQL Queries

Given Schema:
- Customers(C_Id, company, First, Last, street, city, state, Zip, Tel)
- Orders(O_id, C_id, O_date, ship_date, shipping, tax)
- Books(ISBN, Title, Price, Authors, Pages, Pubdate, Qty)
- Order_info(O_id, ISBN, Qty, price)

---

### i) List all the ISBN for which an order is placed by customer**

```sql
SELECT DISTINCT ISBN
FROM Order_info;
```
### ii) Retrieve the number of times each customer has placed an order

```sql
SELECT C_id, COUNT(O_id) AS OrderCount
FROM Orders
GROUP BY C_id;

```

### iii) Retrieve those books which have ‘D’ as the first character in title and which was published in the year 2019
```sql
SELECT *
FROM Books
WHERE Title LIKE 'D%' AND YEAR(Pubdate) = 2019;
```

---

# Question 6: SQL Queries

Given Schema:
- Books(book_id, title, author_id, genre, publication_year, price)
- Authors(author_id, author_name, nationality)
- BookOrders(order_id, book_id, customer_id, order_date, quantity)

---

### i) Retrieve the titles of all books published after the year 2000. Sort the titles alphabetically.**

```sql
SELECT title
FROM Books
WHERE publication_year > 2000
ORDER BY title ASC;
```

### ii) Find the total number of books in each genre. Sort the result by the number of books in descending order.
```sql
SELECT genre, COUNT(*) AS total_books
FROM Books
GROUP BY genre
ORDER BY total_books DESC;
```
### iii) Increase the price of all books by 5%.
```sql
UPDATE Books
SET price = price * 1.05;
```
### iv) Retrieve the author names of the book ‘database’.

```sql
SELECT A.author_name
FROM Authors A
JOIN Books B ON A.author_id = B.author_id
WHERE B.title = 'database';
```
### v) Retrieve the Book details for which the price is less than 200 Rs.

```sql
SELECT *
FROM Books
WHERE price < 200;
```

---

## Question 7: SQL Trigger to Update `total_orders` in Customers Table

### SQL Statement to Create Trigger:

```sql
DELIMITER $$

CREATE TRIGGER update_total_orders_after_insert
AFTER INSERT ON Orders
FOR EACH ROW
BEGIN
    UPDATE Customers
    SET total_orders = total_orders + 1
    WHERE customer_id = NEW.customer_id;
END$$

DELIMITER ;
```

## Question 8: SQL View for Current Salaries of All Employees

Given Schema:
- Employees(employee_id, employee_name, department_id, salary, hire_date)
- Departments(department_id, department_name, manager_id)
- Salaries(employee_id, salary_amount, effective_date)

---

### SQL Statement to Create the View:

```sql
CREATE VIEW CurrentEmployeeSalaries AS
SELECT 
    E.employee_id,
    E.employee_name,
    D.department_name,
    S.salary_amount AS current_salary
FROM 
    Employees E
JOIN 
    Departments D ON E.department_id = D.department_id
JOIN 
    Salaries S ON E.employee_id = S.employee_id
WHERE 
    S.effective_date = (
        SELECT MAX(effective_date) 
        FROM Salaries 
        WHERE employee_id = E.employee_id
    );
```
---
## Question 8: Book and Library

Given Schema:
- Book (BookID, Title, AuthorID, PublisherID, Price)
- Author (AuthorID, Name)
- Publisher (PublisherID, Name)
- Customer (CustomerID, Name, Email)
- Order (OrderID, CustomerID, Date)
- OrderDetails (OrderID, BookID, Quantity)

---

### i) List the names of publishers who have published books priced over 500.
```sql
SELECT DISTINCT p.Name
FROM Publisher p
JOIN Book b ON p.PublisherID = b.PublisherID
WHERE b.Price > 500;

```


### ii)  Get the titles of books ordered by a customer named 'Alice'.
```sql
SELECT DISTINCT b.Title
FROM Customer c
JOIN "Order" o ON c.CustomerID = o.CustomerID
JOIN OrderDetails od ON o.OrderID = od.OrderID
JOIN Book b ON od.BookID = b.BookID
WHERE c.Name = 'Alice';

```


### iii) List the titles of books that have never been ordered.
```sql
SELECT b.Title
FROM Book b
LEFT JOIN OrderDetails od ON b.BookID = od.BookID
WHERE od.BookID IS NULL;
```


### iv) Retrieve the names of customers who have ordered a book titled '1984'.


```sql
SELECT DISTINCT c.Name
FROM Customer c
JOIN "Order" o ON c.CustomerID = o.CustomerID
JOIN OrderDetails od ON o.OrderID = od.OrderID
JOIN Book b ON od.BookID = b.BookID
WHERE b.Title = '1984';
```


### v) List the titles of books along with the quantity ordered in each order.
```sql
SELECT o.OrderID, b.Title, od.Quantity
FROM OrderDetails od
JOIN Book b ON od.BookID = b.BookID
JOIN "Order" o ON od.OrderID = o.OrderID;


```

---


## Question 9: SQL queries Book and Library

Given Schema:
- Book (BookID, Title, AuthorID, PublisherID, Price)
- Author (AuthorID, Name)
- Publisher (PublisherID, Name)
- Customer (CustomerID, Name, Email)
- Order (OrderID, CustomerID, Date)
- OrderDetails (OrderID, BookID, Quantity)

---

### i) Find the total number of books in the store
```sql
SELECT COUNT(*) AS TotalBooks
FROM Book;

```

### ii) List all books along with their authors and publishers

```sql
SELECT B.Title, A.Name AS AuthorName, P.Name AS PublisherName
FROM Book B
JOIN Author A ON B.AuthorID = A.AuthorID
JOIN Publisher P ON B.PublisherID = P.PublisherID;

```

### iii) Retrieve the top 5 bestselling books (based on the total quantity ordered)
```sql
SELECT B.BookID, B.Title, SUM(OD.Quantity) AS TotalSold
FROM OrderDetails OD
JOIN Book B ON OD.BookID = B.BookID
GROUP BY B.BookID, B.Title
ORDER BY TotalSold DESC
LIMIT 5;

```

### iv) List all customers who have ordered books more than once
```sql
SELECT C.CustomerID, C.Name, COUNT(O.OrderID) AS OrderCount
FROM Customer C
JOIN `Order` O ON C.CustomerID = O.CustomerID
GROUP BY C.CustomerID, C.Name
HAVING COUNT(O.OrderID) > 1;


```

### v) Find the average price of books in each genre
-- Add Genre
```sql
ALTER TABLE Book ADD Genre VARCHAR(100);

```

```sql
SELECT Genre, AVG(Price) AS AveragePrice
FROM Book
GROUP BY Genre;

```
---
## Question 10: SQL trigger 
```
Consider a database managing customer information with two tables:
‘Customer’ and ‘CustomerUpdateLog’.
Customer (CustomerID, Name, Email, Phone)
CustomerUpdateLog (LogID, CustomerID, LogMessage, LogDate)
Write SQL queries for the following:
```

### i) Create the tables with suitable datatypes and constraints
```sql
-- Customer Table
CREATE TABLE Customer (
    CustomerID INT PRIMARY KEY AUTO_INCREMENT,
    Name VARCHAR(100) NOT NULL,
    Email VARCHAR(100) UNIQUE NOT NULL,
    Phone VARCHAR(15) NOT NULL
);

-- CustomerUpdateLog Table
CREATE TABLE CustomerUpdateLog (
    LogID INT PRIMARY KEY AUTO_INCREMENT,
    CustomerID INT NOT NULL,
    LogMessage TEXT NOT NULL,
    LogDate TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    FOREIGN KEY (CustomerID) REFERENCES Customer(CustomerID)
);


```


### ii) Create a trigger that logs updates in CustomerUpdateLog
```sql

DELIMITER $$

CREATE TRIGGER trg_customer_update
AFTER UPDATE ON Customer
FOR EACH ROW
BEGIN
    INSERT INTO CustomerUpdateLog (CustomerID, LogMessage)
    VALUES (
        NEW.CustomerID,
        CONCAT(
            'Customer updated. Name: ', OLD.Name, ' → ', NEW.Name,
            ', Email: ', OLD.Email, ' → ', NEW.Email,
            ', Phone: ', OLD.Phone, ' → ', NEW.Phone
        )
    );
END$$

DELIMITER ;

```
---
## Question 11: SQL view Book Library

Given Schema:
- Book (BookID, Title, AuthorID, PublisherID, Price)
- Author (AuthorID, Name)
- Publisher (PublisherID, Name)
- Customer (CustomerID, Name, Email)
- Order (OrderID, CustomerID, Date)
- OrderDetails (OrderID, BookID, Quantity)

---

## write a SQL query to create a view named ‘BookDetails’ that combines information from the ‘Book’, ‘Author’, and ‘Publisher’ tables:
```sql
CREATE VIEW BookDetails AS
SELECT 
    B.BookID,
    B.Title,
    A.Name AS AuthorName,
    P.Name AS PublisherName,
    B.Price
FROM 
    Book B
JOIN 
    Author A ON B.AuthorID = A.AuthorID
JOIN 
    Publisher P ON B.PublisherID = P.PublisherID;

```
---


