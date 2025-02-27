class Solution {
    public int missingNumber(int[] nums) {
        int len = nums.length;
        int sum = len;
        int arrSum = 0;
        for(int i = 0; i<nums.length; i++){
            arrSum+=nums[i];
            sum+=i;
        }

        return sum - arrSum;
    }
}