class SolutionDay1 {
public:
    int firstBadVersion(int n) {
        int left=0, right=n, mid;
        while (left < right) {
            mid = left + (right - left)/2;
            if (isBadVersion(mid) == true) {
                right = mid;                                                                      
            } else {
                left  = mid+1;
            }
        }
        return right;
    }
};
