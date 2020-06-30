// Problem 981, Time Map
#include<algorithm>
#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
using std::cout;
using std::endl;
using std::string;
using std::vector;
class TimeMap {
private:
    // Map Object
    std::unordered_map<string, vector<std::pair<int, string>>> M;
public:
    /** Initialize your data structure here. */
    TimeMap() {}
    
    void set(string key, string value, int timestamp) {
        M[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        // If the map does not contain this key or timestamp is smaller than everything else, return empty string
        if (!M.count(key) || M[key][0].first > timestamp) return "";
        //Compare function
        auto comp = []( const std::pair<int, string>& a, const std::pair<int, string>& b) { return a.first < b.first; };
        // Binary search using lower_bound
        auto it = upper_bound(M[key].begin(), M[key].end(), std::pair<int, string>({timestamp, ""}), comp);
        return it == M[key].begin() ? "" : std::prev(it)->second;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */

int main() {
    TimeMap M;
    string value;
    // Test case 1
    M = TimeMap();
    M.set("foo", "bar", 1); // store the key "foo" and value "bar" along with timestamp = 1   
    value = M.get("foo", 1); // output "bar"
    cout << "The value is now: " << value << endl;
    value = M.get("foo", 3); // output "bar" since there is no value corresponding to foo at timestamp 3 and timestamp 2, then the only value is at timestamp 1 ie "bar"
    cout << "The value is now: " << value << endl;
    M.set("foo", "bar2", 4);
    value = M.get("foo", 4); // output "bar2"   
    cout << "The value is now: " << value << endl;
    value = M.get("foo", 5); //output "bar2"
    cout << "The value is now: " << value << endl;
    // Compile successful
    return 0;
}
