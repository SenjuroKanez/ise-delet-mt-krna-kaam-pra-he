def count2len(s):
    count = 0
    for i in range(len(s)):
        if len(s[i]) >= 2 and s[i][0] == s[i][-1]:
            print(s[i])
            count += 1
    return count

s = ['abc', 'xyz', 'aba', '1221', 'xyzzyx', 'aa', '122']
#print("Count:", count2len(s))


def sumprodtup(t):
    total_sum = 0
    prod = 1
    for num in t:
        prod *= num
        total_sum += num
    print("Sum of products:", prod)
    return total_sum

t = (1, 2, 4, 2, 6)
#print("Total Sum:", sumprodtup(t))


def largestinlist(l):
    largest = l[0]
    for num in l:
        if num > largest:
            largest = num
    return largest

l = [1, 2, 4, 2, 6]
#print("Largest Number:", largestinlist(l))

def removeempty(l):
    result = []
    for item in l:
        if len(item) > 0:
            result.append(item)
    return result

L = [(), (), ('',), ('a', 'b'), (), ('a', 'b', 'c'), (), ('d',)]
#print("List after removing empty tuples:", removeempty(L))


def dictionarygen(a):
    result = {}
    for x in range(1, a + 1):
        result[str(x)] = x * x   
    return result

n = int(input("Enter a number: "))
#print(dictionarygen(n))

def numinword(n):
    num_dict = {
        0: "Zero", 1: "One", 2: "Two", 
        3: "Three", 4: "Four", 5: "Five",
        6: "Six", 7: "Seven", 8: "Eight",
        9: "Nine"
    }
    for digit in str(n):
        print(num_dict[int(digit)], end=' ')

num = int(input("Enter a number: "))
numinword(num)








