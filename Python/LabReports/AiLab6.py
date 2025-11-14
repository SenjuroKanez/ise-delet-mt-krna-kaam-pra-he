from collections import deque
graph = {
'0': ['1', '2'],
'1': ['3', '4'],
'2': ['5', '6'],
'3': [],
'4': [],
'5': [],
'6': []
}
def bfs(graph, start):
    visited = set()
    queue = deque([start])
    while queue:
        node = queue.popleft()
        if node not in visited:
            print(node, end=' ')
            visited.add(node)
            queue.extend(i for i in graph[node] if i not in visited)
bfs(graph, '0')
# Output: 1 2 3 4 5 6


graph = {
'0': ['1', '2'],
'1': ['3', '4'],
'2': ['5', '6'],
'3': [],
'4': [],
'5': [],
'6': []
}
def dfs(graph, start):
    visited = set()
    stack = [start]
    while stack:
        node = stack.pop()
        if node not in visited:
            print(node, end=' ')
            visited.add(node)
            stack.extend(reversed(graph[node]))
dfs(graph, '0') # Output: 1 4 3 2 6 5