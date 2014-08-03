/*
    Theory:
        1) building a graph with nodes (a, b) meaning a defeated b - O(N^2);
        2) DFS-traversing it from each node O(N^3)
        3) when a route of the length (N - 1) edges is found, print result
