// Day 13, Iterator for Combinator
#include <iostring>
#include <string>
#include <vector>
using std::string;
using std::vector;

class CombinationIterator {
    private:
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
            int n = s.size(), total = (1 << n) - 1, count, index;
            vector<strings> comb;
            string str;
            while (total--) {
                index = n-1;
                count = 0;
                str   = "";
                while (index) {
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
            vector<string> iterators = combinations(characters, k);
        }

        string next() {
            return iterators[index++];
        }

        bool hasNext() {
            return index < iterators.size();
        }
};

int main() {
    // Compile successcul
    return 0;
}
