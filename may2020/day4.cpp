class SolutionDay4 {
public:
    int findComplement(int num) {
        int temp = num, mask = 0;
        while (temp) {
            mask <<= 1;
            temp >>= 1;
            mask  |= 1; // Flip the bit from 0 to 1
        }
        
        return mask ^ num;
    }
};
