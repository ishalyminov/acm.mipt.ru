/*
    Theory:
        1) building a graph with nodes (a, b) meaning a defeated b - O(N^2);
        2) DFS-traversing it from each node O(N^3)
        3) when a route of the length (N - 1) edges is found, print result
*/

#include <vector>
#include <cstdio>

enum Mark {
    NOT_PROCESSED,
    FULLY_PROCESSED,
    PARTLY_PROCESSED
};

std::vector<int> dfs(const std::vector<std::vector<int>>& in_graph, int in_start_node) {
    std<vector<Mark> node_marks(in_graph.size(), NOT_PROCESSED);
    for (size_t node_index = 0; node_index)

}

int main() {
    int players_number;
    std::cin >> players_number;
    std::vector<std::vector<int>> players_graph(players_number);
    for (int player_number = 0; player_number != players_number; ++player_number) {
        std::string player_stats;
        std::cin >> player_stats;
        for (int stat_index = 0; stat_index != player_stats.length() - 2; ++ stat_index) {
            char stat = player_stats[stat_index];
            switch (stat) {
                case '+':
                    players_graph[player_number].append(stat_index);
                    break;
                case '-':
                    players_graph[stat_index].append(player_number);
            }
        }
    }
    return 0;
}
