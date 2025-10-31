def factorial(n):
    if n < 0:
        return "Factorial is not defined for negative numbers."
    
    result = 1
    for i in range(1, n + 1):
        result *= i
    return result


# Example:
num = 5
print(f"Factorial of {num} is {factorial(num)}")


def unique_list(lst):
    unique = []
    for item in lst:
        if item not in unique:
            unique.append(item)
    return unique


# Example:
sample_list = [1, 2, 3, 3, 4, 4, 5, 3, 7, 5]
print("Sample List:", sample_list)
print("Unique List:", unique_list(sample_list))



def even_numbers(n):
    evens = []
    for i in range(1, n + 1):
        evens.append(2 * i)
    
    print("Even numbers:", evens)
    return sum(evens), product(evens)


def product(numbers):
    result = 1
    for num in numbers:
        result *= num
    return result


# Example usage:
n = int(input("Enter how many even numbers you want: "))
total, prod = even_numbers(n)

print("Sum of even numbers:", total)
print("Product of even numbers:", prod)





def match_strings(str1, str2):
    if str1 == str2:
        print("✅ The strings match exactly!")
    else:
        print("❌ The strings do not match.")


# Example usage:
string1 = input("Enter first string: ")
string2 = input("Enter second string: ")

match_strings(string1, string2)



# Function to check login credentials
def login_system(username, password):
    # Predefined correct credentials
    correct_username = "admin"
    correct_password = "12345"

    if username == correct_username and password == correct_password:
        print("✅ Login Successful! Welcome,", username)
    else:
        print("❌ Invalid username or password. Please try again.")


# --- Main Program ---
print("=== User Login System ===")
user = input("Enter Username: ")
pwd = input("Enter Password: ")

login_system(user, pwd)
