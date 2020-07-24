// Day 24, All Paths from Source to Target
#include <iostream>
#include <vector>
using std::vector;

class SolutionDay24 {
    public:
        vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
            vector<vector<int>> paths;
            return paths;
        }
};

int main() {
    SolutionDay24 sol;
    vector<vector<int>> graph, paths;
    // Test case 1
    graph = {{1}, {}};
    paths = sol.allPathsSourceTarget(graph);
    std::cout << "The paths are: " << std::endl;
    for (vector<int> vec : paths) {
        for (int x : vec) {
            std::cout << x << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    // Test case 1
    graph = {{1}, {0}};
    paths = sol.allPathsSourceTarget(graph);
    std::cout << "The paths are: " << std::endl;
    for (vector<int> vec : paths) {
        for (int x : vec) {
            std::cout << x << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    // Test case 1
    graph = {{1,2},{3},{3},{}};
    paths = sol.allPathsSourceTarget(graph);
    std::cout << "The paths are: " << std::endl;
    for (vector<int> vec : paths) {
        for (int x : vec) {
            std::cout << x << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    // Test case 1
    graph = {{1,2},{2,3},{1,3},{4},{}};
    paths = sol.allPathsSourceTarget(graph);
    std::cout << "The paths are: " << std::endl;
    for (vector<int> vec : paths) {
        for (int x : vec) {
            std::cout << x << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    // Compile successful
    return 0;
}
