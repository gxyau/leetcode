// Problem 981, Time Map
#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
using std::cout;
using std::endl;
using std::pair;
using std::string;
using std::unordered_map;
using std::vector;
class TimeMap {
private:
    // Map Object
    unordered_map<string, vector<pair<int, string>>> M;
public:
    /** Initialize your data structure here. */
    TimeMap() {}
    
    void set(string key, string value, int timestamp) {
        cout << "Key, value, timestamp: " << key << ", " << value << ", " << timestamp << endl;
        if (M.count(key)) { // Key exists
            M[key].push_back({timestamp, value});
        } else { // Key does not exists
            M[key] = vector<pair<int, string>>(1,{timestamp, value});
        }
        cout << "Element(s) at this key currently: ";
        for (auto x : M[key]) cout << "(" << x.first << ", " << x.second << ")";
        cout << endl;
    }
    
    string get(string key, int timestamp) {
        // Get all the pairs for this key
        vector<pair<int,string>> vec = M[key];
        // If timestamp is smaller than everything else, return empty string
        if (vec[0].first > timestamp) return "";
        int l = 0, r = vec.size()-1, m = l + (r-l)/2, elm;
        while (true) {
            if (vec[m-1].first <= timestamp && vec[m].first > timestamp) return vec[m].second;
            elm = vec[m].first;
            if (elm > timestamp) {
                r = m-1;
            } else if (elm < timestamp) {
                cout << "Case 1, elm, ts: " << elm << ", " << timestamp << endl;
                cout << "l, m, r: " << l << ", " << m << ", " << r << endl;
                l = m+1;
            } else if (elm == timestamp) {
                cout << "Case 2, elm, ts: " << elm << ", " << timestamp << endl;
                return vec[m-1].second;
            }
            m = l + (r-l)/2;
        }
        return "";
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
