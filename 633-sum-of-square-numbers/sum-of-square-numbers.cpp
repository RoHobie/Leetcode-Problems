class Solution {
public:
    bool judgeSquareSum(int c) {
        if (c < 2) {
            return true;
        }
        int low = 1;
        int high = c / 2;
        long long closest = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (mid <= c / mid) {
                closest = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        int left = 0;
        while (left <= closest) {
            long long product = left * left + closest * closest;
            if (product == c) {
                return true;
            }
            if (product < c) {
                left++;
            } else {
                closest--;
            }
        }

        return false;
    }
};