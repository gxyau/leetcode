class Solution {
public:
    int minFlips(int a, int b, int c) {
        int flips = 0;
        unsigned int a_temp = a;
        unsigned int b_temp = b;
        unsigned int c_temp = c;
        
        while ((a_temp|b_temp)^c_temp) {
            int a_bit = a_temp & 1;
            int b_bit = b_temp & 1;
            int c_bit = c_temp & 1;
            if ((a_bit | b_bit) == 0 && c_bit == 1) {
                flips += 1;
            } else if ((a_bit|b_bit) == 1 && c_bit == 0) {
                flips += a_bit + b_bit;
            }
            a_temp >>= 1;
            b_temp >>= 1;
            c_temp >>= 1;
        }
        
        return flips;
    }
};
