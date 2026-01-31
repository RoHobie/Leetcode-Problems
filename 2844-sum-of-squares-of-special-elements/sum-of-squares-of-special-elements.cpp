class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        long long square = 0;
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            if (size % (i + 1) == 0) {
                square += nums[i] * nums[i];
            }
        }
        return square;
    }
};