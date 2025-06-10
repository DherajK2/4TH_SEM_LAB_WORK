# Question 1 Relational Algebra Expressions 

Given Relations:
- Students(student_id, student_name, major)
- Courses(course_id, course_name, department)
- Enrollments(student_id, course_id, grade)
- Professors(professor_id, professor_name, department)
- Teaches(professor_id, course_id, semester)

---

**i) List the names of all students who are enrolled in at least one course.**
```relational_algebra
π_{student_name} ( Students ⨝_{Students.student_id = Enrollments.student_id} Enrollments )
```


---

**ii) Find the names of all professors who teach in the 'Computer Science' department.**
```relational_algebra
π_{professor_name} ( σ_{department = 'Computer Science'} (Professors) )


```

---

**iii) Get the names of all students who have received an 'A' grade in any course.**

```relational_algebra
π_{student_name} ( Students ⨝{Students.student_id = Enrollments.student_id} σ{grade = 'A'} (Enrollments) )
```


---

**iv) Find the names of students who are enrolled in courses taught by 'Professor Smith'.**
```relational_algebra
ProfSmith ← σ_{professor_name = 'Professor Smith'} (Professors)

CoursesTaught ← ProfSmith ⨝_{ProfSmith.professor_id = Teaches.professor_id} Teaches

StudentsEnrolled ← Enrollments ⨝_{Enrollments.course_id = CoursesTaught.course_id} CoursesTaught

Result ← StudentsEnrolled ⨝_{StudentsEnrolled.student_id = Students.student_id} Students

π_{student_name} (Result)
```

---

**v) Retrieve the names and departments of all professors who do not teach any course in the 'Fall 2023' semester.**
```relational_algebra
FallProfessors ← π_{professor_id} ( σ_{semester = 'Fall 2023'} (Teaches) )

AllProfessors ← π_{professor_id, professor_name, department} (Professors)

ProfessorsNotTeachingFall ← AllProfessors - ( AllProfessors ⨝ FallProfessors )

π_{professor_name, department} (ProfessorsNotTeachingFall)

```

## Question 2: Relational Algebra Expressions

Given Relations:
- Books(book_id, title, author_id, genre, price)
- Authors(author_id, author_name, nationality)
- Publishers(publisher_id, publisher_name, location)
- BookOrders(order_id, book_id, quantity, order_date)
- Customers(customer_id, customer_name, email, city)

---

**i) List the titles and prices of all books in the 'Mystery' genre.**
```relational_algebra
π_{title, price} ( σ_{genre = 'Mystery'} (Books) )

```

---

**ii) Find the names of authors who have written books published by 'Penguin Books'.**

*Note: Since `Publishers` and `Books` tables do not have a direct relationship given, assume a missing `publisher_id` in `Books`. If so:*

```relational_algebra
PenguinPublisher ← σ_{publisher_name = 'Penguin Books'} (Publishers)

BooksByPenguin ← PenguinPublisher ⨝_{Publishers.publisher_id = Books.publisher_id} Books

AuthorsByPenguin ← BooksByPenguin ⨝_{BooksByPenguin.author_id = Authors.author_id} Authors

π_{author_name} (AuthorsByPenguin)

```

---

**iii) Get the titles and order dates of books ordered by customer 'Alice' in the year 2023.**


*Note: Since `BookOrders` has no direct customer link, assuming a missing `customer_id` in `BookOrders` or an intermediate Orders table. Assuming `BookOrders` has `customer_id`:*
```relational_algebra
AliceCustomer ← σ_{customer_name = 'Alice'} (Customers)

AliceOrders ← AliceCustomer ⨝{Customers.customer_id = BookOrders.customer_id} σ{YEAR(order_date) = 2023} (BookOrders)

BooksOrdered ← AliceOrders ⨝_{AliceOrders.book_id = Books.book_id} Books

π_{title, order_date} (BooksOrdered)

```

---

**iv) Retrieve the names and nationalities of authors whose books have been ordered more than 100 times.**

```relational_algebra
BookOrdersAgg ← γ_{book_id; SUM(quantity) → total_quantity} (BookOrders)

BooksWithLargeOrders ← σ_{total_quantity > 100} (BookOrdersAgg)

AuthorsWithLargeOrders ← BooksWithLargeOrders ⨝_{BooksWithLargeOrders.book_id = Books.book_id} Books

AuthorsInfo ← AuthorsWithLargeOrders ⨝_{Books.author_id = Authors.author_id} Authors

π_{author_name, nationality} (AuthorsInfo)
```


---

**v) Find the names of customers who have placed orders for books written by 'Stephen King'.**
```relational_algebra

StephenKing ← σ_{author_name = 'Stephen King'} (Authors)

StephenKingBooks ← StephenKing ⨝_{StephenKing.author_id = Books.author_id} Books

OrdersForSKBooks ← StephenKingBooks ⨝_{Books.book_id = BookOrders.book_id} BookOrders

CustomersWhoOrderedSK ← OrdersForSKBooks ⨝_{BookOrders.customer_id = Customers.customer_id} Customers

π_{customer_name} (CustomersWhoOrderedSK)

```


## Question 3: Relational Algebra Expressions

Given Relations:  
- Book(BookID, Title, AuthorID, PublisherID, Price)  
- Author(AuthorID, Name)  
- Publisher(PublisherID, Name)  
- Customer(CustomerID, Name, Email)  
- Order(OrderID, CustomerID, Date)  
- OrderDetails(OrderID, BookID, Quantity)

---

**i) Find the titles of books written by 'J.K. Rowling'.**
```relational_algebra
JkAuthor ← σ_{Name = 'J.K. Rowling'}(Author)

JkBooks ← JkAuthor ⨝_{Author.AuthorID = Book.AuthorID} Book

π_{Title}(JkBooks)
```
---

**ii) Get the titles of books ordered by a customer named 'Alice'.**
```relational_algebra
Alice ← σ_{Name = 'Alice'}(Customer)

AliceOrders ← Alice ⨝_{Customer.CustomerID = Order.CustomerID} Order

AliceOrderDetails ← AliceOrders ⨝_{Order.OrderID = OrderDetails.OrderID} OrderDetails

BooksOrdered ← AliceOrderDetails ⨝_{OrderDetails.BookID = Book.BookID} Book

π_{Title}(BooksOrdered)
```
---

**iii) Find the names of authors whose books are published by 'Penguin Books'.**
```relational_algebra
PenguinPublisher ← σ_{Name = 'Penguin Books'}(Publisher)

BooksByPenguin ← PenguinPublisher ⨝_{Publisher.PublisherID = Book.PublisherID} Book

AuthorsByPenguin ← BooksByPenguin ⨝_{Book.AuthorID = Author.AuthorID} Author

π_{Name}(AuthorsByPenguin)
```
---

**iv) Get the names of customers who have placed orders in the month of January 2024.**
```relational_algebra
JanOrders ← σ_{Date ≥ '2024-01-01' ∧ Date < '2024-02-01'}(Order)

CustomersJanOrders ← JanOrders ⨝_{Order.CustomerID = Customer.CustomerID} Customer

π_{Name}(CustomersJanOrders)
```
---

**v) List the titles of books along with the quantity ordered in each order.**
```relational_algebra
OrderBookDetails ← OrderDetails ⨝_{OrderDetails.BookID = Book.BookID} Book

π_{Title, Quantity}(OrderBookDetails)
```
---










