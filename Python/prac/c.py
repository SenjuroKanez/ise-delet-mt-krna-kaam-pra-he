import sys
try:
    import numpy as np
except Exception as e:
    raise ImportError(
        "numpy import failed. Ensure numpy is installed for the Python interpreter running this script:\n"
        f"Run: {sys.executable} -m pip install numpy\nOriginal error: {e}"
    )


# 1. arange(): Array of evenly spaced values within a range
arr1 = np.arange(0, 10, 2)  # [0, 2, 4, 6, 8]
print("arange:\n", arr1, "\n")
# 2. eye(): Identity matrix (diagonal ones, else zeros)
arr2 = np.eye(3)
print("eye:\n", arr2, "\n")
# 3. ones(): Array of ones with given shape
arr3 = np.ones((2, 3))
print("ones:\n", arr3, "\n")
# 4. ones_like(): Array of ones with same shape as arr2
arr4 = np.ones_like(arr2)
print("ones_like:\n", arr4, "\n")
# 5. zeros(): Array of zeros with given shape
arr5 = np.zeros((2, 3))
print("zeros:\n", arr5, "\n")
# 6. zeros_like(): Zeros with same shape as arr3
arr6 = np.zeros_like(arr3)
print("zeros_like:\n", arr6, "\n")
# 7. full(): Array filled with a specified value
arr7 = np.full((2, 3), 9)
print("full:\n", arr7, "\n")
# 8. full_like(): Array with same shape/type as arr3, filled with a specific value
arr8 = np.full_like(arr3, 7)
print("full_like:\n", arr8, "\n")



x = np.arange(0,14,2)
print(x[:3])
print(x[3:])


x = np.arange(0, 50, 10)
index = np.array([3, 1, 4])
print(x[index])
mask = np.array([True, False, False, True, False])
print(x[mask])