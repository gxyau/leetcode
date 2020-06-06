// Day 5, Random pick with weight
#include<iostream>
#include<random>
#include<vector>
using std::vector;
class SolutionDay5 {
public:
    Solution(vector<int>& w) {
        probs = vector<float>(w.size()+1, {0.0});
        float sum = 0.0;
        for (int i = 1; i < w.size() + 1; ++i) {
            sum       += (float) w[i-1];
            probs[i]  += sum;
        }
        for (int i = 0; i < probs.size(); ++ i) {
            probs[i] /= sum;
        }
        cout << endl;
    }
        
    int pickIndex() {
        // For choosing index uniform at random
        const int n     = probs.size()-1;
        const int from  = 0;
        const int to    = n-1;
        //cout << "From: " << from << ", To: " << to << endl;
        std::random_device                    rand_dev;
        std::mt19937                          generator(rand_dev());
        std::uniform_int_distribution<int>    unif(from, to);
        std::uniform_real_distribution<float> sunif(0.0,1.0);
        while (true) {
            // Generate probability
            float prob      = sunif(generator);
            // Generate random index
            int index  = unif(generator);
            if (prob <= probs[index+1] - probs[index]) {
                return index;
            }
        }
    }
private:
    vector<float> probs;
};

int main() {
    float variable = 0.0;
    return 0;
}

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
