class SolutionDay5 {
public:
    int firstUniqChar(string s) {
        // Store occurence of each character in a map    
        map<char, int> dict;    
        for (char& c : s) {    
            if (dict.count(c)) {
                ++dict[c];
            } else {
                dict[c] = 1;
            }
        }
        for(int i = 0; i < s.size(); ++i) {
            if(dict[s[i]] == 1) return i;
        }
        return -1;               
    }
};
