import heapq
# Define the graph with edge costs (g(n))
graph = {
'Src': [('1', 3), ('2', 2), ('3', 1)],
'1': [('4', 4), ('5', 6)],
'2': [('6', 6)],
'3': [('7', 2), ('8', 2)],
'4': [],
'5': [],
'6': [],
'7': [('dest', 3)],
'8': [('dest', 3)],
'dest': []
}
# Define the heuristic values (h(n))
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
# A* algorithm
def a_star(graph, heuristics, start, goal):
	open_set = []
	heapq.heappush(open_set, (heuristics[start], 0, start, [start]))
	while open_set:
		f, g, current, path = heapq.heappop(open_set)
		if current == goal:
			return path, g  # Return path and total cost
		for neighbor, cost in graph[current]:
			new_g = g + cost
			new_f = new_g + heuristics.get(neighbor, float('inf'))
			heapq.heappush(open_set, (new_f, new_g, neighbor, path + [neighbor]))
	return None, float('inf')

# Run the A* algorithm
path, total_cost = a_star(graph, heuristics, 'Src', 'dest')
print("A* Path:", path)
print("Total Cost:", total_cost)



# Graph with edge costs
graph = {
    'A': [('B', 1), ('C', 4)],
    'B': [('D', 3), ('C', 2)],
    'C': [('E', 5)],
    'D': [('F', 2), ('G', 4)],
    'E': [('G', 3)],
    'F': [('G', 1)],
    'G': []
}

# Heuristic values (h)
heuristics = {
    'A': 7,
    'B': 6,
    'C': 5,
    'D': 3,
    'E': 2,
    'F': 1,
    'G': 0
}

# A* algorithm
def a_star(graph, heuristics, start, goal):
    open_set = []
    heapq.heappush(open_set, (heuristics[start], 0, start, [start]))  # (f, g, node, path)

    while open_set:
        f, g, current, path = heapq.heappop(open_set)

        if current == goal:
            return path, g  # Return the path and its total cost

        for neighbor, cost in graph[current]:
            new_g = g + cost
            new_f = new_g + heuristics[neighbor]
            heapq.heappush(open_set, (new_f, new_g, neighbor, path + [neighbor]))

    return None, float('inf')

# Run A*
path, total_cost = a_star(graph, heuristics, 'A', 'G')
print("A* Path:", path)
print("Total Cost:", total_cost)



# Step 1: Graph (edges + cost)
graph = {
    'Src': [('1', 1), ('2', 1), ('3', 1)],
    '1': [('4', 1), ('5', 1)],
    '2': [('6', 1)],
    '3': [('7', 1), ('8', 1)],
    '4': [],
    '5': [],
    '6': [],
    '7': [('dest', 1)],
    '8': [],
    'dest': []
}

# Step 2: Heuristic values
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

# Step 3: A* Algorithm
def a_star(graph, heuristics, start, goal):
    open_set = []
    heapq.heappush(open_set, (heuristics[start], 0, start, [start]))  # (f, g, node, path)

    while open_set:
        f, g, current, path = heapq.heappop(open_set)
        print(f"Visiting: {current} | f={f}, g={g}, h={heuristics[current]}")

        if current == goal:
            return path, g  # path and cost

        for neighbor, cost in graph[current]:
            new_g = g + cost
            new_f = new_g + heuristics[neighbor]
            heapq.heappush(open_set, (new_f, new_g, neighbor, path + [neighbor]))

    return None, float('inf')

# Step 4: Run A*
path, total_cost = a_star(graph, heuristics, 'Src', 'dest')

# Step 5: Show results
print("\nA* Path:", path)
print("Total Cost:", total_cost)
graph = {
    'Src': [('1', 1), ('2', 1), ('3', 1)],
    '1': [('4', 1), ('5', 1)],
    '2': [('6', 1)],
    '3': [('7', 1), ('8', 1)],
    '4': [],
    '5': [],
    '6': [],
    '7': [('dest', 1)],
    '8': [],
    'dest': []
}

# Step 2: Heuristic values
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

# Step 3: A* Algorithm
def a_star(graph, heuristics, start, goal):
    open_set = []
    heapq.heappush(open_set, (heuristics[start], 0, start, [start]))  # (f, g, node, path)

    while open_set:
        f, g, current, path = heapq.heappop(open_set)
        print(f"Visiting: {current} | f={f}, g={g}, h={heuristics[current]}")

        if current == goal:
            return path, g  # path and cost

        for neighbor, cost in graph[current]:
            new_g = g + cost
            new_f = new_g + heuristics[neighbor]
            heapq.heappush(open_set, (new_f, new_g, neighbor, path + [neighbor]))

    return None, float('inf')

# Step 4: Run A*
path, total_cost = a_star(graph, heuristics, 'Src', 'dest')

# Step 5: Show results
print("\nA* Path:", path)
print("Total Cost:", total_cost)
# Graph connections with edge costs
graph = {
    'S': [('A', 4), ('B', 10), ('C', 11)],
    'A': [('B', 8), ('D', 5)],
    'B': [('D', 15)],
    'C': [('D', 8), ('F', 2), ('E', 20)],
    'D': [('F', 1), ('H', 16), ('I', 20)],
    'E': [('G', 19)],
    'F': [('G', 13)],
    'H': [('I', 1), ('J', 2)],
    'I': [('J', 5), ('K', 13), ('G', 5)],
    'J': [('K', 7)],
    'K': [('G', 16)],
    'G': []  # Goal node
}

# Heuristic values (h(n)) — taken from your diagram
heuristics = {
    'S': 7,
    'A': 8,
    'B': 6,
    'C': 5,
    'D': 5,
    'E': 3,
    'F': 3,
    'G': 0,
    'H': 7,
    'I': 4,
    'J': 5,
    'K': 3
}

# A* Algorithm
def a_star(graph, heuristics, start, goal):
    open_set = []
    heapq.heappush(open_set, (heuristics[start], 0, start, [start]))  # (f, g, node, path)

    while open_set:
        f, g, current, path = heapq.heappop(open_set)
    
        if current == goal:
            return path, g  # Goal reached
    
        for neighbor, cost in graph[current]:
            new_g = g + cost
            new_f = new_g + heuristics[neighbor]
            heapq.heappush(open_set, (new_f, new_g, neighbor, path + [neighbor]))
   
    return None, float('inf')

# Run the A* search
path, total_cost = a_star(graph, heuristics, 'S', 'G')
print("A* Path:", path)
print("Total Cost:", total_cost)