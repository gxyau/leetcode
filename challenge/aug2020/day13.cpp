// Day 13, Iterator for Combinator
#include <iostring>
#include <string>
#include <vector>
using std::string;
using std::vector;

class CombinationIterator {
    private:
        vector<string> iterators;
        int ind = 0; // Index for the iterator
        
        unsigned int count_bits(int n) {
            int count = 0;
            while (n) {
                count += (n & 1);
                n >>= 1;
            }
            return count;
        }
        
        vector<string> combinations(string s, int k) {
            int n = s.size(), total = (1 << n), count, index;
            vector<string> comb;
            string str;
            while (total--) {
                index = n-1;
                count = 0;
                str   = "";
                while (index >= 0) {
                    if (total & (1 << index)) {
                        ++count;
                        str += s[n-1-index];
                    }
                    --index;
                }
                if (count == k) comb.push_back(str);
            }
            return comb;
        }
    public:
        CombinationIterator(string characters, int combinationLength) {
            iterators = combinations(characters, combinationLength);
        }

        string next() {
            return iterators[ind++];
        }

        bool hasNext() {
            return ind < iterators.size();
        }
};

int main() {
    // Compile successcul
    return 0;
}
