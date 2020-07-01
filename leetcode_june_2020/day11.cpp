// Day 11, Sort colours
#include<iostream>
#include<vector>
using std::cout;
using std::endl;
using std::swap;
using std::vector;

class SolutionDay11 {
public:
    void sortColors(vector<int>& nums) {
        int l = 0, m = 0, h = nums.size()-1;
        while (m <= h) {
            //Traverse middle until both pointers meet, then we stop.
            //Basically iterate till all elements are sorted
            switch(nums[m]) {
                // If 0, swap this element to lower zone then increment both
                // pointers l and m.
                case 0:
                    swap(nums[l++],nums[m++]);
                    break;
                
                // If 1, do not need to swap since it is in the correct zone
                // but we increment the pointer
                case 1:
                    ++m;
                    break;
                
                // If 2, swap with h and decrement pointer h
                case 2:
                    swap(nums[m], nums[h--]);
                    break;
            }
        }
    }
};

int main() {
    SolutionDay11 sol;
    vector<int> colours = {2,0,2,1,1,0};
    sol.sortColors(colours);
    for (int x : colours) {
        cout << x << " ";
    }
    cout << endl;
    colours = {0,1,1,0,1,2,1,2,0,0,0,1};
    sol.sortColors(colours);
    for (int x : colours) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
