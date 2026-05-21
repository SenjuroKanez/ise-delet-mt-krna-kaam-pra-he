import heapq

# Graph representation with edge costs (weights) from the image
graph = {
    'A': [('b', 1), ('c', 4)],
    'b': [('d', 3), ('c', 2)],
    'c': [('e', 5)],
    'd': [('f', 2), ('e', 4)],
    'e': [('g', 3)],
    'f': [('g', 1)],
    'g': []
}

# Heuristic function (estimated distance to goal)
# These are straight-line distances or estimates to reach goal 'g'
heuristic = {
    'A': 10,
    'b': 8,
    'c': 7,
    'd': 5,
    'e': 3,
    'f': 2,
    'g': 0
}


def a_star_search(graph, start, goal, heuristic):
    """
    A* Search Algorithm
    - Combines actual cost g(n) and heuristic cost h(n)
    - f(n) = g(n) + h(n)
    - Uses priority queue to explore most promising nodes first
    """
    # Priority queue: (f_score, node, path, g_score)
    open_set = [(heuristic[start], start, [start], 0)]
    visited = set()
    
    print(f"A* Search from '{start}' to '{goal}'")
    print("=" * 70)
    print(f"{'Step':<6} {'Node':<6} {'g(n)':<8} {'h(n)':<8} {'f(n)':<8} {'Path'}")
    print("-" * 70)
    
    step = 0
    
    while open_set:
        # Get node with lowest f_score
        f_score, current, path, g_score = heapq.heappop(open_set)
        
        step += 1
        h_score = heuristic[current]
        print(f"{step:<6} {current:<6} {g_score:<8} {h_score:<8} {f_score:<8} {' -> '.join(path)}")
        
        # Goal reached
        if current == goal:
            print("=" * 70)
            print(f"\n✓ GOAL REACHED!")
            print(f"  Optimal Path: {' -> '.join(path)}")
            print(f"  Total Cost: {g_score}")
            return path, g_score
        
        # Skip if already visited
        if current in visited:
            continue
        
        visited.add(current)
        
        # Explore neighbors
        for neighbor, cost in graph[current]:
            if neighbor not in visited:
                new_g_score = g_score + cost
                new_f_score = new_g_score + heuristic[neighbor]
                new_path = path + [neighbor]
                heapq.heappush(open_set, (new_f_score, neighbor, new_path, new_g_score))
    
    print("\nNo path found!")
    return None, float('inf')


def greedy_best_first_search(graph, start, goal, heuristic):
    """
    Greedy Best-First Search
    - Uses only heuristic h(n) to guide search
    - Faster but not guaranteed to find optimal path
    """
    # Priority queue: (h_score, node, path, g_score)
    open_set = [(heuristic[start], start, [start], 0)]
    visited = set()
    
    print(f"\nGreedy Best-First Search from '{start}' to '{goal}'")
    print("=" * 70)
    print(f"{'Step':<6} {'Node':<6} {'g(n)':<8} {'h(n)':<8} {'Path'}")
    print("-" * 70)
    
    step = 0
    
    while open_set:
        h_score, current, path, g_score = heapq.heappop(open_set)
        
        step += 1
        print(f"{step:<6} {current:<6} {g_score:<8} {h_score:<8} {' -> '.join(path)}")
        
        if current == goal:
            print("=" * 70)
            print(f"\n✓ GOAL REACHED!")
            print(f"  Path Found: {' -> '.join(path)}")
            print(f"  Total Cost: {g_score}")
            return path, g_score
        
        if current in visited:
            continue
        
        visited.add(current)
        
        for neighbor, cost in graph[current]:
            if neighbor not in visited:
                new_g_score = g_score + cost
                new_path = path + [neighbor]
                heapq.heappush(open_set, (heuristic[neighbor], neighbor, new_path, new_g_score))
    
    print("\nNo path found!")
    return None, float('inf')


def uniform_cost_search(graph, start, goal):
    """
    Uniform Cost Search (UCS)
    - Uses only actual cost g(n)
    - Guaranteed to find optimal path but explores more nodes
    """
    # Priority queue: (g_score, node, path)
    open_set = [(0, start, [start])]
    visited = set()
    
    print(f"\nUniform Cost Search from '{start}' to '{goal}'")
    print("=" * 70)
    print(f"{'Step':<6} {'Node':<6} {'g(n)':<8} {'Path'}")
    print("-" * 70)
    
    step = 0
    
    while open_set:
        g_score, current, path = heapq.heappop(open_set)
        
        step += 1
        print(f"{step:<6} {current:<6} {g_score:<8} {' -> '.join(path)}")
        
        if current == goal:
            print("=" * 70)
            print(f"\n✓ GOAL REACHED!")
            print(f"  Optimal Path: {' -> '.join(path)}")
            print(f"  Total Cost: {g_score}")
            return path, g_score
        
        if current in visited:
            continue
        
        visited.add(current)
        
        for neighbor, cost in graph[current]:
            if neighbor not in visited:
                new_g_score = g_score + cost
                new_path = path + [neighbor]
                heapq.heappush(open_set, (new_g_score, neighbor, new_path))
    
    print("\nNo path found!")
    return None, float('inf')


# Main execution
if __name__ == "__main__":
    print("\n" + "=" * 70)
    print("HITEC UNIVERSITY - ARTIFICIAL INTELLIGENCE LAB")
    print("INFORMED SEARCH ALGORITHMS: HEURISTIC SEARCH")
    print("=" * 70)
    
    print("\nGraph Structure (with edge weights):")
    for node, neighbors in graph.items():
        print(f"  {node} -> {neighbors}")
    
    print("\nHeuristic Values (estimated distance to goal 'g'):")
    for node, value in heuristic.items():
        print(f"  h({node}) = {value}")
    
    print("\n" + "=" * 70)
    
    # Run A* Search
    print("\n1. A* SEARCH ALGORITHM")
    print("   f(n) = g(n) + h(n)")
    print("-" * 70)
    astar_path, astar_cost = a_star_search(graph, 'A', 'g', heuristic)
    
    # Run Greedy Best-First Search
    print("\n" + "=" * 70)
    print("\n2. GREEDY BEST-FIRST SEARCH")
    print("   Uses only h(n)")
    print("-" * 70)
    greedy_path, greedy_cost = greedy_best_first_search(graph, 'A', 'g', heuristic)
    
    # Run Uniform Cost Search
    print("\n" + "=" * 70)
    print("\n3. UNIFORM COST SEARCH (for comparison)")
    print("   Uses only g(n)")
    print("-" * 70)
    ucs_path, ucs_cost = uniform_cost_search(graph, 'A', 'g')
    
    # Summary
    print("\n" + "=" * 70)
    print("\nSUMMARY OF RESULTS:")
    print("=" * 70)
    print(f"{'Algorithm':<25} {'Path':<25} {'Cost'}")
    print("-" * 70)
    if astar_path:
        print(f"{'A* Search':<25} {' -> '.join(astar_path):<25} {astar_cost}")
    if greedy_path:
        print(f"{'Greedy Best-First':<25} {' -> '.join(greedy_path):<25} {greedy_cost}")
    if ucs_path:
        print(f"{'Uniform Cost Search':<25} {' -> '.join(ucs_path):<25} {ucs_cost}")
    print("=" * 70)
    
    print("\nKEY DIFFERENCES:")
    print("- A*: Optimal & efficient (uses g(n) + h(n))")
    print("- Greedy: Fast but not always optimal (uses only h(n))")
    print("- UCS: Optimal but explores more nodes (uses only g(n))")
    print("=" * 70)