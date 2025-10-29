-- 0. Start clean (optional for testing)
DROP TABLE IF EXISTS students;
DROP TABLE IF EXISTS student_records;

-- a) Create the table
CREATE TABLE students (
  roll_no   INTEGER PRIMARY KEY,
  name      TEXT,
  department TEXT,
  cgpa      REAL,
  email     TEXT
);

-- b) Insert three records (one with NULL email)
INSERT INTO students (roll_no, name, department, cgpa, email) VALUES
  (101, 'Ali Khan',         'CS', 3.45, 'ali.khan@example.edu'),
  (102, 'Sana R.',          'EE', 2.90, 'sana.r@example.edu'),
  (103, 'Omar Ahmed',       'CS', 3.80, NULL);

-- c) Display all records
SELECT * FROM students;

-- d) Display students whose cgpa > 3.0
SELECT * FROM students WHERE cgpa > 3.0;

-- e) Add new column semester
ALTER TABLE students ADD COLUMN semester INTEGER;

-- f) Update all existing students so semester = 5
UPDATE students SET semester = 5;

-- Show table after update
SELECT * FROM students;

-- g) Rename table students -> student_records
ALTER TABLE students RENAME TO student_records;

-- Verify rename (select from new table)
SELECT * FROM student_records;
