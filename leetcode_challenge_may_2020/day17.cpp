// D1y 17, Find all anagrams in a string
#include<iostream>
#include<vector>
using std::vector;
using std::cout;
using std::endl;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> indices;
        map<char,int> dict;
        int start=0;
        int matched = 0;
        for(auto x : p){
            ++dict[x];
        }
        
        for(int end =0 ; end<s.size(); end++){
            char r  = s[end];
            if(dict.find(r)!=dict.end()){
                --dict[r];
                if(dict[r]==0){
                    ++matched;
                }
            }
            if(matched==dict.size())
            {
                indices.push_back(start);
            }
            if(end>=p.size()-1){
                char left = s[start++];
                if(dict.find(left)!=dict.end()){
                    if(dict[left]==0){
                        --matched;
                    }
                    ++dict[left];
                }
            }
        }
        return indices;
    }
};
