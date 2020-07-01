// Day 28, Reconstruct Itinerary
#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <unordered_map>
#include <vector>
using std::cout;
using std::endl;
using std::priority_queue;
using std::string;
using std::vector;
using std::unordered_map;

class SolutionDay28 {
private:
    void build_path(string src, unordered_map<string, priority_queue<string, vector<string>, std::greater<string>>>& graph, vector<string>& itinerary) {
        string dest;
        while(!graph[src].empty()) {
            dest = graph[src].top();
            graph[src].pop();
            build_path(dest, graph, itinerary);
        }
        itinerary.push_back(src);
        return;
    }
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        // Graph for the adjacency list
        unordered_map< string, priority_queue<string, vector<string>, std::greater<string>>> graph;
        // Build graph adjacency list
        for (auto pair : tickets) {
            if (!graph.count(pair[0])) graph[pair[0]] = priority_queue<string, vector<string>, std::greater<string>>();
            graph[pair[0]].push(pair[1]);
        }
        // Find the itinerary, using Eulerian path
        vector<string> itinerary;
        build_path("JFK", graph, itinerary);
        reverse(itinerary.begin(), itinerary.end());
        return itinerary;
    }
};

int main() {
    SolutionDay28 sol;
    vector<vector<string>> tickets;
    vector<string> itinerary;
    // Case 1
    tickets   = {{"MUC","LHR"},{"JFK","MUC"},{"SFO","SJC"},{"LHR","SFO"}};
    itinerary = sol.findItinerary(tickets);
    cout << "The itinerary is: ";
    for (string airport : itinerary) {
        cout << airport << " ";
    }
    cout << endl;
    // Case 2
    tickets   = {{"JFK","SFO"},{"JFK","ATL"},{"SFO","ATL"},{"ATL","JFK"},{"ATL","SFO"}};
    itinerary = sol.findItinerary(tickets);
    cout << "The itinerary is: ";
    for (string airport : itinerary) {
        cout << airport << " ";
    }
    cout << endl;
    // Case 3
    tickets   = {{"JFK","KUL"},{"JFK","NRT"},{"NRT","JFK"}};
    itinerary = sol.findItinerary(tickets);
    cout << "The itinerary is: ";
    for (string airport : itinerary) {
        cout << airport << " ";
    }
    cout << endl;
    // Successful
    return 0;
}
