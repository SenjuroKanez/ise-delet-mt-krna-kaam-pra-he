class Person():
    def init(self, name, age):
        self.name = name
        self.age = age

class John(Person):
    def init(self, name, age):
        self.name = name
        self.age = age

class employee(Person):
    def init(self, name, age):
        self.name = name
        self.age = age

obj = John("John", 36)
print(obj.name) 
obj1 = employee("ak", 20)
print(obj1.name)
print("This is another test")
    