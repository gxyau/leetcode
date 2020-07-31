class SolutionDay2 {
public:
    int numJewelsInStones(string J, string S) {
        unordered_map<char, int> map;
        for (char j : J) map[j]++;
        for (char s : S) map['*'] += (map[s] > 0) ? 1 : 0;
        return map['*'];
    }
};
