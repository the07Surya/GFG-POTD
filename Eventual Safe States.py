def eventualSafeNodes(self, V: int, adj: List[List[int]]) -> List[int]:
        def is_safe(node):
            if node in safe:
                return True
            if node in visited:
                return False

            visited.add(node)
            for neighbor in adj[node]:
                if not is_safe(neighbor):
                    return False

            visited.remove(node)
            safe.add(node)
            return True

        safe = set()
        visited = set()

        for node in range(V):
            is_safe(node)

        return sorted(list(safe))
