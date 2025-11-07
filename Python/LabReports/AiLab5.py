import numpy as np

# original array
arr = np.array([[0, 1], [2, 3]])

# flatten the array
flat = arr.flatten()

print("Original flattened array:")
print(arr)

print("Maximum value of the above flattened array:", np.max(flat))
print("Minimum value of the above flattened array:", np.min(flat))


# create a 3x3 matrix with values from 2 to 10
matrix = np.arange(2, 11).reshape(3, 3)

print(matrix)




# original array
arr = np.array([1, 2, 3, 4])

# convert to float
float_arr = arr.astype(float)

print("Original array:", arr)
print("Array converted to a float type:", float_arr)




# matrices
A = np.array([[5, 5],
              [2, 1]])

B = np.array([[1, 0],
              [0, 1]])

# multiply
result = np.dot(A, B)

# transpose
transpose_result = result.T

print("Matrix A:\n", A)
print("Matrix B:\n", B)
print("A x B:\n", result)
print("Transpose of result:\n", transpose_result)



A = np.array([
    [6, 1, 1, 3],
    [4, -2, 5, 1],
    [2, 8, 7, 6],
    [3, 1, 9, 7]
], dtype=float)

A_inv = np.linalg.inv(A)

np.set_printoptions(precision=8, suppress=True)
print("Inverse of A:\n", A_inv)
print("\nCheck A @ A_inv (should be identity):\n", np.round(A @ A_inv, 8))
