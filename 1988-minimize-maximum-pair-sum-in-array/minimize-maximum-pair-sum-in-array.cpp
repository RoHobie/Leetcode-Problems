class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int sum = 0;
        int left = 0;
        int right = n-1;
        while(left<right){
            int currentSum = nums[left] + nums[right];
            sum = max(sum, currentSum);
            left++;
            right--;
        }
        return sum;
    }
};