# hello


"""ajflkasfmn
dkalfdjklsjahf
sdjashfdlkjhsda
"""

print("hello")

x = "hitec"
y ="University "
z = "texila"
print(z)
print(y)
print(x)
print(x,y,z)
print()

x = input("enter x:")
print ("value of x is", x)
print()

#Assigen the value to multiple variables

x = y = z =  40
print(z)
print(y)
print(x)
print()
print (x, y, z)
print()


#Assigen multiple values to multiple variables

x = 20
y = 30
z = 22

print ("value of x" , x , "value of y", y, "value of z" , z)
print()
print("value of z", z)


#Print datatypes

x = 12

b = "asas"
c = 12.11

print(type(x))
print(type(b))
print(type(c))
print()

x = int (input("Enter a number:"))
print()

if (x % 2) == 0:
    print ("x is even")
else:
    print ("number is odd:")

print()
#Age vote calculator

a = int (input("enter your age:"))

if a > 18:
    print("you are eligeble to vote:")
else:
    print(" you are ineligible to vote")
print()
# list check

a = int (input("input a number:"))
if a == 10:
    print("your number is equal to 10")
elif a == 100:
    print("your number is equal to 100")
elif a == 150:
    print("your number is equal to 150")
else:
    print("your number is not in list")
print()

#Numbers upto certain number

n = int (input("Enter numbers upto which natural numbers are to be written"))

for i in range(0,n):
    print(i,end = ' ')

print()
#Pattern printing

x = int (input("enter the number of rows"))

for i in range(0,x):
    print()
    for j in range(0,i+1):
        print("*", ' ', end="")


print()



i = 1;
while(i <= 5):
    print (i);
    i = i + 1;