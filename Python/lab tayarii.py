a = "ali"
print (a, 3 + 9)
print ("hello world")
print ("welcome to python programming")
print ("this is lab tayarii")
print ("i am learning python")
print ("python is fun")
print ("let's code something interesting")
print ("have a great day!")
b = [1, 2, 3, 4, 5]
for i in b:
    print (i * 2)
def greet(name):
    return "Hello, " + name + "!"
print (greet("Alice"))
def factorial(n):
    if n == 0:
        return 1
    else:
        return n * factorial(n - 1)

print (factorial(5))
class dog:
    def __init__(self, name):
        self.name = name

    def bark(self):
        return "Woof! My name is " + self.name
my_dog = dog("Buddy")
print (my_dog.bark())
import math
print ("The square root of 16 is", math.sqrt(16))
print ("The value of pi is", math.pi)
for i in range(1, 6):
    print ("Square of", i, "is", i ** 2)
def fibonacci(n):
    a, b = 0, 1
    for _ in range(n):
        print(a, end=' ')
        a, b = b, a + b
    print()
fibonacci(10)
print ("This concludes the lab tayarii code examples.")
class chiuaha(dog):
    def fetch(self, item):
        return self.name + " fetched the " + item

my_chiuaha = chiuaha("Tiny")
print (my_chiuaha.bark())
print (my_chiuaha.fetch("ball"))
print ("Goodbye!")

import numpy as pp
array = pp.array([1, 2, 3, 4, 5])
print ("Numpy array:", array)
print ("Array multiplied by 2:", array * 2)
print ("End of lab tayarii code.")


print ("Flattened array:", pp.flatten(array))
arra = pp.array([[0, 1], [2, 3]])
pp.flatten(arra)
print ("2D array flattened:", pp.flatten(pp.array([[0, 1], [2, 3]])))
print (pp.max(array))
print ("Maximum value in array:", pp.max(array))
print (pp.min(array))
print ("Minimum value in array:", pp.min(array))
print (pp.max(arra))
print ("Maximum value in 2D array:", pp.max(pp.arra([[0, 1], [2, 3]])))
print (pp.min(arra))
print ("Minimum value in 2D array:", pp.min(arra))

print ("Range array:", pp.arange(10))
pp.reshape(array, (5, 1))
from collections import deque

graph  = {
    'A' : ['B', 'C'],
    'B' : ['D', 'E'],
    'C': ['F'],
    'D': [],
    'E': ['F'],
    'F': []

}
def bfs(graph , start):
    visited = set()
    queue = deque([start])
    while queue:
        node = queue.popleft()
        if node not in visited:
            print (node, end="")
            visited.add(node)
            queue.extend(i for i in graph[node] if i not in visited)
bfs (graph, 'A')
print ("Graph traversal complete.")

def dfs(graph, start ):
    visited = set()
    stack = [start]
    while stack:
        node = stack.pop()
        if node not in visited:
            print (node , end=" ")
            visited.add(node)
            stack.extend(i for i in graph[node] if i not in visited)
dfs (graph, 'A')

print ("DFS traversal complete.")
import heapq
graph ={
    'Src': ['1', '2', '3'],
    '1': ['4', '5'],
    '2': ['6'],
    '3': ['7', '8'],
    '4': [], '5': [], '6': [], '7': ['dest'], '8': [], 'dest': []
 }
heuristics = {
    'Src': 20,
    '1': 22,
    '2': 21,
    '3': 10,
    '4': 25,
    '5': 24,
    '6': 30,
    '7': 5,
    '8': 12,
    'dest': 0
 }

def best_first_search(graph, heuristics, start, goal):
    open_set = []
    heapq.heappush(open_set, (heuristics[start], start))
    
    visited = set()
    parent = {start: None}
    while open_set:
        h, current = heapq.heappop(open_set)
        print (f"Visiting node: {current} with heuristic: {h}")
        if current == goal:
            path = []
            while current is not None:
                path.append(current)
                current = parent[current]
            path.reverse()
            return path
        visited.add(current)
        for neighbor in graph[current]:
            if neighbor not in visited:
                heapq.heappush(open_set, (heuristics[neighbor], neighbor))
                parent[neighbor] = current
    return None
path = best_first_search(graph, heuristics, 'Src', 'dest')
print ("Path found:", " -> ".join(path) if path else "No path found.")


def a_star_search(graph, heuristics, start, goal):
    open_set = []
    heapq.heappush(open_set, (heuristics[start], 0, start))
    while open_set:
        f, g, current = heapq.heappop(open_set)
        print (f"Visiting node: {current} with f: {f} and g: {g}")
        if current == goal:
            return True
        for neighbor in graph[current]:
            heapq.heappush(open_set, (heuristics[neighbor] + g + 1, g + 1, neighbor))
    return False
found = a_star_search(graph, heuristics, 'Src', 'dest')
print ("Goal found!" if found else "Goal not found.")

import math
# Minimax function
def minimax(depth, nodeIndex, isMax, scores, targetDepth):
    # Base case
    if depth == targetDepth:
        return scores[nodeIndex]
    if isMax:
        return max(
            minimax(depth + 1, nodeIndex * 2, False, scores, targetDepth),
            minimax(depth + 1, nodeIndex * 2 + 1, False, scores, targetDepth)
        )
    else:
        return min(
            minimax(depth + 1, nodeIndex * 2, True, scores, targetDepth),
            minimax(depth + 1, nodeIndex * 2 + 1, True, scores, targetDepth)
        )


    # Terminal node values from left to right: H, I, J, K, L, M, N, Oscores = [4, 2, -3, -6, 7, 0, 5, 8]
    # Calculate depth = log2 of the number of leaf nodes
    treeDepth = int(math.log2(len(scores)))
# Start Minimax
optimalValue = minimax(0, 0, True, scores, treeDepth)
print("The optimal value is:", optimalValue)


import pandas as pd

s = pd.Series([1, 3, 5, 7, 9], index=['a', 'b', 'c', 'd', 'e'])

data = {
    'Name': ['Ali', 'Awais', 'Qasim'],
    'Age': [25, 30, 35],
    'City': ['Lahore', 'Islamabad', 'Taxila']
}
 
df = pd.DataFrame(data)
print (s)
print (df)

df = pd.read_csv('file.csv')
df = pd.read_excel('file.xlsx')

df[['Age', 'Blood Pressure', 'Heart Disease Status']].head()

# Patients older than 60 with Heart Disease
df[(df['Age'] > 60) & (df['Heart Disease Status'] == 'Yes')]

df.sort_values(by='BMI', ascending=False).head()

df.rename(columns={'Cholesterol Level': 'Cholesterol'}, inplace=True)

df['new']='ok'

df["Gender"].value_counts()

df.drop(columns=['CRP Level'], inplace=True)

df.isnull().sum()

df.dropna(subset=['Gender'], inplace=True)


import matplotlib.pyplot as plt

plt.figure(figsize=(8, 5))
plt.hist(df['age'], bins=10, color='skyblue', edgecolor='black')
plt.title('Age Distribution')
plt.xlabel('Age')
plt.ylabel('Frequency')
plt.grid(True)
plt.show()

plt.figure(figsize=(8, 6)) # Define figure size
df.boxplot(column='Blood Pressure', by='Gender', grid=False) # Grouped box plot
plt.title('Blood Pressure by Gender')
plt.suptitle('') # Remove automatic title
plt.ylabel('Blood Pressure')
plt.show()


df['Heart Disease Status'].value_counts().plot(kind='bar',
color='coral') # Bar chart
plt.title('Heart Disease Status Count')
plt.ylabel('Number of Patients')
plt.xticks(rotation=0) # Keep x-labels horizontal
plt.show()


df['Gender'].value_counts().plot(kind='pie', autopct='%1.1f%%', startangle=90, colors=['lightgreen', 'lightblue']) # Pie chart
plt.title('Gender Distribution')
plt.ylabel('') # Hide y-label
plt.show()


plt.scatter(df['Age'], df['Blood Pressure'], alpha=0.6, c='purple') 
plt.title('Blood Pressure vs Age')
plt.xlabel('Age')
plt.ylabel('Blood Pressure')
plt.grid(True)
plt.show()

import pandas as pd
from sklearn import linear_model
import matplotlib.pyplot as plt
# Creating a simple dataset
data = {'Area': [500, 1000, 1500, 2000, 2500],
 'Price': [150000, 200000, 250000, 300000, 350000]}
# Convert to DataFrame
df = pd.DataFrame(data)
# Plotting the data
plt.xlabel('Area')
plt.ylabel('Price')
plt.scatter(df['Area'], df['Price'], color='red', marker='+')
plt.show()
# Create linear regression object
reg = linear_model.LinearRegression()
# Use df[['Area']] (2D) and df['Price'] (1D)
reg.fit(df[['Area']], df['Price'])
# Predict price of a home with area = 3300 sq ft
predicted_price = reg.predict([[3300]])
print("Predicted price for 3300 sq ft:", predicted_price)
# y=mx+b
# Print the slope (coefficient) and intercept of the line
print("Coefficient (slope):", reg.coef_)
print("Intercept:", reg.intercept_)



# Import necessary libraries
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LogisticRegression
import matplotlib.pyplot as plt
# Creating a simple dataset
data = {'Hours': [1, 2, 3, 4, 5, 6, 7, 8],
 'Result': [0, 0, 0, 0, 1, 1, 1, 1]}
# Convert to DataFrame
df = pd.DataFrame(data)
# Visualize the data
plt.xlabel('Hours Studied')
plt.ylabel('Pass/Fail')
plt.scatter(df['Hours'], df['Result'], color='blue', marker='o')
plt.show()
# Split the data into training and testing sets
X_train, X_test, y_train, y_test = train_test_split(df[['Hours']], df['Result'], test_size=0.25)
# Create logistic regression model
model = LogisticRegression()
# Train the model
model.fit(X_train, y_train)
# Predict result for a new input
new_prediction = model.predict([[4.5]])




# Step 1: Import necessary libraries
import pandas as pd
from sklearn.preprocessing import LabelEncoder
from sklearn.tree import DecisionTreeClassifier, plot_tree
import matplotlib.pyplot as plt
# Step 2: Create the dataset manually
data = {
'Weather': ['Sunny', 'Cloudy', 'Sunny', 'Cloudy', 'Rainy', 'Rainy', 'Rainy', 'Sunny', 'Cloudy', 'Rainy'],
'Temperature': ['Hot', 'Hot', 'Mild', 'Mild', 'Mild', 'Cool', 'Mild', 'Hot', 'Hot', 'Mild'],
'Humidity': ['High', 'High', 'Normal', 'High', 'High', 'Normal', 'High', 'High', 'Normal', 'High'],
'Wind': ['Weak', 'Weak', 'Strong', 'Strong', 'Strong', 'Strong', 'Weak', 'Strong', 'Weak', 'Strong'],
'Play': ['No', 'Yes', 'Yes', 'Yes', 'Yes', 'No', 'Yes', 'No', 'Yes', 'No']
}
df = pd.DataFrame(data)
# Step 3: Encode each column separately and store encoders
encoders = {}
for column in df.columns:
 le = LabelEncoder()
 df[column] = le.fit_transform(df[column])
encoders[column] = le # Save the encoder for future decoding or new input
# Step 4: Prepare features and target
X = df[['Weather', 'Temperature', 'Humidity', 'Wind']]
y = df['Play']
# Step 5: Train the model
model = DecisionTreeClassifier(criterion='entropy')
model.fit(X, y)
# Step 6: Visualize the decision tree
plt.figure(figsize=(10, 6))
plot_tree(model, feature_names=['Weather', 'Temperature', 'Humidity', 'Wind'],
 class_names=['No', 'Yes'], filled=True)
plt.show()
# Step 7: Predict for new data (Sunny, Cool, High, Strong)
# Encode each input separately
sample = [
 encoders['Weather'].transform(['Sunny'])[0],
 encoders['Temperature'].transform(['Cool'])[0],
 encoders['Humidity'].transform(['High'])[0],
 encoders['Wind'].transform(['Strong'])[0]
]
prediction = model.predict([sample])
print("Prediction for input (Sunny, Cool, High, Strong):", encoders['Play'].inverse_transform(prediction)[0])


# Part 1: Creating the Dataset
import pandas as pd
import matplotlib.pyplot as plt
from sklearn.cluster import KMeans
# Create a custom dataset
data = {
    'CustomerID': [1, 2, 3, 4, 5, 6, 7, 8, 9, 10],
    'Annual Income ($)': [15, 16, 17, 45, 46, 47, 85, 86, 87, 88],
    'Spending Score': [39, 35, 40, 70, 65, 68, 18, 15, 20, 17]
}
df = pd.DataFrame(data)
print(df)
# Part 2: Selecting Features for Clustering
X = df[['Annual Income ($)', 'Spending Score']]
# Part 3: Plotting the Raw Data
plt.scatter(X['Annual Income ($)'], X['Spending Score'], c='gray')
plt.xlabel('Annual Income ($)')
plt.ylabel('Spending Score')
plt.title('Customer Distribution')
plt.grid(True)
plt.show()
# Part 4: Applying K-Means Clustering
kmeans = KMeans(n_clusters=3)
df['Cluster'] = kmeans.fit_predict(X)
# Part 5: Visualizing the Clusters
colors = ['red', 'green', 'blue']
for i in range(3):
 plt.scatter(df[df['Cluster'] == i]['Annual Income ($)'], df[df['Cluster'] == i]['Spending Score'],
 label=f'Cluster {i}', c=colors[i])
# Plot centroids
centers = kmeans.cluster_centers_
plt.scatter(centers[:, 0], centers[:, 1], s=300, c='yellow', marker='X', label='Centroids')
plt.xlabel('Annual Income ($)')
plt.ylabel('Spending Score')
plt.title('Customer Segments (K=3)')
plt.legend()
plt.grid(True)
plt.show()
# Part 6: Predicting for a New Customer
# New customer's data
new_customer = [[50, 60]]
# Part 7: Visualizing New Customer on the Graph
colors = ['red', 'green', 'blue']
for i in range(3):
 plt.scatter(df[df['Cluster'] == i]['Annual Income ($)'], df[df['Cluster'] == i]['Spending Score'],
 c=colors[i], label=f'Cluster {i}')
# Plot cluster centers
centers = kmeans.cluster_centers_
plt.scatter(centers[:, 0], centers[:, 1], s=300, c='yellow', marker='X', label='Centroids')
# Plot new customer
plt.scatter(50, 60, c='black', marker='*', s=300, label='New Customer')
plt.xlabel('Annual Income ($)')
plt.ylabel('Spending Score')
plt.title('Predicting New Customer Cluster')
plt.legend()
plt.grid(True)
plt.show()




import numpy as np
from sklearn.model_selection import train_test_split
from tensorflow.keras.models import Sequential
from tensorflow.keras.layers import Dense
# 1. Input and output data
X = np.array([[5, 8], [3, 4], [4, 6], [2, 3]])
y = np.array([[1], [0], [1], [0]])
# 2. Split the data into training and testing (75% train, 25% test)
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.25, random_state=42)
# 3. Build the model
model = Sequential()
# Hidden layer with 4 neurons and ReLU activation
model.add(Dense(4, input_dim=2, activation='relu'))
# Output layer with sigmoid activation (binary classification)
model.add(Dense(1, activation='sigmoid'))
# 4. Compile the model
model.compile(loss='binary_crossentropy', optimizer='adam', metrics=['accuracy'])
# 5. Train the model on training data
model.fit(X_train, y_train, epochs=100, verbose=1)
# 6. Predict on unseen test data
predictions = model.predict(X_test)
# 7. Convert probabilities to 0 and 1 using threshold 0.5
predicted_classes = (predictions >= 0.5).astype(int)
# 8. Display results
print("Test Inputs:")
print(X_test)
print("Predicted Probabilities:")
print(predictions)
print("Predicted Class Labels (0 or 1):")
print(predicted_classes)