import heapq
# Graph adjacency list
graph = {
'Src': ['1', '2', '3'],
'1': ['4', '5'],
'2': ['6'],
'3': ['7', '8'],
'4': [], '5': [], '6': [], '7': ['dest'], '8': [], 'dest': []
}
# Heuristic values for Best First Search (lower is better)
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
	# Priority Queue to always choose node with lowest heuristic
	open_set = []
	heapq.heappush(open_set, (heuristics[start], start))
	visited = set()
	parent = {start: None}
	while open_set:
		h, current = heapq.heappop(open_set)
		print(f"Visiting: {current}")
		if current == goal:
			# Reconstruct the path from parent dictionary
			path = []
			while current:
				path.append(current)
				current = parent[current]
			path.reverse()
			return path
		if current in visited:
			continue
		visited.add(current)
		# Explore all neighbors
		for neighbor in graph.get(current, []):
			if neighbor not in visited:
				heapq.heappush(open_set, (heuristics.get(neighbor, float('inf')), neighbor))
				if neighbor not in parent:
					parent[neighbor] = current
	return None # Goal not found

# Run Best First Search
path = best_first_search(graph, heuristics, 'Src', 'dest')
print("Best First Search Path:", path)