// Day 19, Goat Latin
#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
using std::string;
using std::vector;
using std::unordered_set;

class SolutionDay19 {
    private:
        unordered_set<char> Vowels = {'a','e','i','o','u','A','E','I','O','U'};
        
        string transform(string word, int endings) {
            if (word.empty()) return word;
            string latin = "";
            if (Vowels.count(word[0])) {
                latin = word + "ma" + string(endings, 'a');
            } else {
                latin = string(word.begin()+1, word.end()) + string(word.begin(), word.begin() + 1) + "ma" + string(endings, 'a');
            }
            return latin;
        }
        
        vector<string> tokenizer(string sentence) {
            vector<string> tokens;
            string token = "";
            for (char c : sentence) {
                if (isalnum(c)) {
                    token += c;
                    continue;
                } else {
                    if (!token.empty()) tokens.push_back(token);
                    token = "";
                }
            }
            if (isalnum(*(sentence.end() - 1))) tokens.push_back(token);
            return tokens;
        }
    public:
        string toGoatLatin(string S) {
            if (S.empty()) return "";
            vector<string> tokens = tokenizer(S);
            int counter = 1;
            string T = "";
            for (string token : tokens) {
                T += transform(token, counter++) + " ";
            }
            return string(T.begin(), T.end()-1);
        }
};

int main() {
    SolutionDay19 sol;
    string answer, S;
    std::cout << "Please enter a sentence: ";
    std::getline(std::cin, S);
    answer = sol.toGoatLatin(S);
    std::cout << "Goat Latin: " << "\"" << answer << "\"" << std::endl;
    // Compile successful
    return 0;
}
