// Day 24, All Paths from Source to Target
#include <iostream>
#include <vector>
using std::vector;

class SolutionDay24 {
    private:
        void find_paths (vector<vector<int>>& graph, vector<vector<int>>& paths, vector<int>& path, int index) {
            if(index==graph.size()-1)  {
                paths.push_back(path);
                return;
            }
            for(auto x: graph[index]){
                path.push_back(x);
                find_paths(graph, paths, path, x);
                path.pop_back();
            }  
        }
    public:
        vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
            vector<vector<int>> paths;
            vector<int> path = {0};
            find_paths(graph, paths, path, 0);
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
    // Test case 2
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
    // Test case 3
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
    // Test case 4
    /*
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
    */
    // Compile successful
    return 0;
}
