CREATE TABLE Employee (
    Emp_no INT PRIMARY KEY,
    E_name VARCHAR(255),
    E_city VARCHAR(255),
    Dept_ID INT,
    Dept_name VARCHAR(255),
    Dept_HOD VARCHAR(255),
    Salary DECIMAL(10, 2),
    E_joiningdate DATE,
    E_serviceyear INT
);

INSERT INTO Employee (Emp_no, E_name, E_city, Dept_ID, Dept_name, Dept_HOD, Salary, E_joiningdate, E_serviceyear) VALUES
(1, 'John Doe', 'New York', 1, 'IT', 'Alice Smith', 50000.00, '2020-02-15', 4),
(2, 'Jane Roe', 'Taxila', 1, 'IT', 'Alice Smith', 20000.00, '2021-05-20', 3),
(3, 'Bob Johnson', 'Los Angeles', 2, 'HR', 'Bob Lee', 25000.00, '2019-10-10', 5),
(4, 'Alice Wonderland', 'Taxila', 3, 'Finance', 'Charlie Brown', 10000.00, '2022-07-01', 2),
(5, 'Eve Adams', 'Chicago', 2, 'HR', 'Bob Lee', 50000.00, '2018-12-05', 6),
(6, 'Frank Green', 'Taxila', 1, 'IT', 'Alice Smith', 15000.00, '2023-03-15', 1);

1. SELECT DISTINCT Dept_name, Dept_HOD FROM Employee;

2. SELECT * FROM Employee;

3. SELECT * FROM Employee WHERE EXTRACT(MONTH FROM E_joiningdate) BETWEEN 1 AND 9;

4. SELECT * FROM Employee WHERE Emp_no > 10 OR Dept_ID = 1;

5. SELECT * FROM Employee WHERE Salary IN (10000, 25000, 50000);

6. SELECT * FROM Employee WHERE Salary < 25000 AND E_city = 'Taxila';