class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

class Job:
    def __init__(self, position, salary):
        self.position = position
        self.salary = salary

class Employee(Person, Job):
    def __init__(self,name, age, position, salary):
        Person.__init__(self, name, age)
        Job.__init__(self, position, salary)
    
        print(f"Employee Name: {self.name}, Age: {self.age}, Position: {self.position}, Salary: {self.salary}")


obj = Employee("Alice", 30, "Developer", 70000)




class Person:
    def set_person_info(self, name, age):
        self.name = name
        self.age = age

    def show_person_info(self):
        print(f"Name: {self.name}, Age: {self.age}")


class Job:
    def set_job_info(self, position, salary):
        self.position = position
        self.salary = salary

    def show_job_info(self):
        print(f"Position: {self.position}, Salary: {self.salary}")


class Employee(Person, Job):
    def set_employee_info(self, name, age, position, salary):
        self.set_person_info(name, age)
        self.set_job_info(position, salary)

    def show_employee_info(self):
        print("=== Employee Info ===")
        self.show_person_info()
        self.show_job_info()


# Create object and use methods
emp = Employee()
emp.set_employee_info("alice", 30, "Developer", 70000)
emp.show_employee_info()


abx = Employee()
abx.set_employee_info("Bob", 28, "Designer", 65000)
abx.show_employee_info()

abx = Employee()
abx.set_employee_info("ali abdali", 40, "majdoor", 5000)
abx.show_employee_info()