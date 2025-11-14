-- Create Employee Table with Primary Key
CREATE TABLE Employee (
    Emp_no INT PRIMARY KEY,
    E_name VARCHAR(100),
    E_address VARCHAR(200),
    E_phoneNumber VARCHAR(20),
    Dept_no INT,
    Dept_name VARCHAR(50),
    email_ID VARCHAR(100),
    Salary DECIMAL(10, 2),
    E_joiningdate DATE,
    E_serviceyear INT
);

-- 1. Insert at least 10 rows in the table
INSERT INTO Employee VALUES
(1, 'Ahmed Ali', 'House 12, Street 5, Karachi', '0300-1234567', 101, 'Computer', 'ahmed.ali@company.com', 35000.00, '2020-01-15', 5),
(2, 'Fatima Khan', 'Flat 3, Block A, Lahore', '0321-2345678', 102, 'Mechanical', 'fatima.khan@company.com', 28000.00, '2021-03-20', 4),
(3, 'Hassan Raza', 'Plot 45, Sector F-7, Islamabad', '0333-3456789', 101, 'Computer', 'hassan.raza@company.com', 42000.00, '2019-06-10', 6),
(4, 'Ayesha Malik', 'House 78, Street 9, Multan', '0345-4567890', 103, 'Electrical', 'ayesha.malik@company.com', 30000.00, '2020-08-25', 5),
(5, 'James', 'Apartment 12, Blue Area, Islamabad', '0312-5678901', 102, 'Mechanical', 'james@company.com', 26000.00, '2022-02-14', 3),
(6, 'Sara Ahmed', 'Villa 23, DHA, Karachi', '0300-6789012', 101, 'Computer', 'sara.ahmed@company.com', 38000.00, '2020-11-30', 5),
(7, 'Bilal Hussain', 'House 56, Garden Town, Lahore', '0321-7890123', 104, 'Civil', 'bilal.hussain@company.com', 22000.00, '2023-01-10', 2),
(8, 'Zainab Tariq', 'Flat 9, Clifton, Karachi', '0333-8901234', 102, 'Mechanical', 'zainab.tariq@company.com', 31000.00, '2021-07-18', 4),
(9, 'Usman Sheikh', 'House 34, Street 12, Faisalabad', '0345-9012345', 103, 'Electrical', 'usman.sheikh@company.com', 27000.00, '2022-05-22', 3),
(10, 'Maria Siddiqui', 'Plot 67, Bahria Town, Islamabad', '0312-0123456', 101, 'Computer', 'maria.siddiqui@company.com', 45000.00, '2018-09-05', 7);

-- 2. Display all information of the Employee table
SELECT * FROM Employee;

-- 3. Display the Record of each employee who works in computer department
SELECT * FROM Employee 
WHERE Dept_name = 'Computer';

-- 4. Update the address of "Emp_no=09" with new address of city Islamabad
UPDATE Employee 
SET E_address = 'House 34, Street 12, Islamabad' 
WHERE Emp_no = 9;

-- 5. Display the name of employee who works in department mechanical
SELECT E_name FROM Employee 
WHERE Dept_name = 'Mechanical';

-- 6. Delete the email ID of employee "James"
UPDATE Employee 
SET email_ID = NULL 
WHERE E_name = 'James';

-- 7. Display the complete record of employees with salary greater than 25,000
SELECT * FROM Employee 
WHERE Salary > 25000;






-- Create the Customers table
CREATE TABLE Customersq (
    CustomerID INTEGER PRIMARY KEY,
    CustomerName TEXT,
    ContactName TEXT,
    Address TEXT,
    City TEXT,
    PostalCode TEXT,
    Country TEXT,
    Price INTEGER
);

-- Insert sample data into the Customers table
INSERT INTO Customersq (CustomerID, CustomerName, ContactName, Address, City, PostalCode, Country, Price)
VALUES
    (1, 'Alfreds Futterkiste', 'Maria Anders', 'Obere Str. 57', 'Berlin', '12209', 'Germany', 25),
    (2, 'Ana Trujillo', 'Ana Trujillo', 'Avda. Constitución 2222', 'México D.F.', '05021', 'Mexico', 35),
    (3, 'Antonio Moreno', 'Antonio Moreno', 'Mataderos 2312', 'México D.F.', '05023', 'Mexico', 55),
    (4, 'Around the Horn', 'Thomas Hardy', '120 Hanover Sq.', 'London', 'WA1 1DP', 'UK', 40),
    (5, 'Berglunds snabbköp', 'Christina Berglund', 'Berguvsvägen 8', 'Luleå', 'S-958 22', 'Sweden', 60),
    (6, 'Paris Market', 'Pierre Dupont', 'Rue de Lyon 45', 'Paris', '75000', 'France', 50),
    (7, 'New Town Shop', 'Ali Khan', 'Main Road', 'Karachi', '74000', 'Pakistan', 70);
SELECT * FROM Customersq;

-- Greater than
SELECT * FROM Customersq WHERE Price > 30;

-- Less than
SELECT * FROM Customersq WHERE Price < 50;

-- Greater than or equal
SELECT * FROM Customersq WHERE Price >= 50;

-- Less than or equal
SELECT * FROM Customersq WHERE Price <= 40;

-- Not equal
SELECT * FROM Customersq WHERE Price <> 35;


-- BETWEEN: select customers with Price between 40 and 60
SELECT * FROM Customersq
WHERE Price BETWEEN 40 AND 60;

-- LIKE: search for pattern (City starts with 'M')
SELECT * FROM Customersq
WHERE City LIKE 'M%';

-- IN: select customers from specific cities
SELECT * FROM Customersq
WHERE City IN ('Paris', 'London');


-- AND: both conditions must be true
SELECT * FROM Customersq
WHERE Country = 'Mexico' AND Price > 30;

-- OR: at least one condition must be true
SELECT * FROM Customersq
WHERE Country = 'Germany' OR Country = 'UK';

-- NOT: exclude a condition
SELECT * FROM Customersq
WHERE NOT Country = 'Germany';
-- Combine AND and OR
SELECT * FROM Customersq
WHERE Country = 'Germany' AND (City = 'Berlin' OR City = 'München');

-- Combine NOT with multiple conditions
SELECT * FROM Customersq
WHERE NOT Country = 'Germany' AND NOT Country = 'USA';
SELECT * FROM Customersq;
