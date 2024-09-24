class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) {
            return 0;
        }

        int left = 1;
        int right = x;
        int result = 0;
        //using binary search (time complexity is O(logn))
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if ((long long)mid*mid <= x) {//long long type: signed 64-bit -> +2^64 to -2^64
                left = mid + 1;
                result = mid;
            } else {
                right = mid - 1;
            }
        }

        return result;
    }
};