class Job():
    def __init__(self, sdg, salary):
        self.sdg = sdg
        self.salary = salary

class employee():
    def __init__(self, name, age):
        self.name = name
        self.age = age

class Person(employee,Job):
    def __init__(self, name, age):  
        self.name = name
        self.age = age
    def myfunc(self):
        print("Hello my name is " + self.name)
        print("My age is " + str(self.age))

obj1 = Person("ak", 20)
print(obj1.name)

