class Solution {
    public int missingNumber(int[] nums) {
        int len = nums.length;
        int sum = 0;
        while(len>0){
            sum+=len;
            len--;
        }
        int arrSum = 0;
        for(int i = 0; i<nums.length; i++){
            arrSum+=nums[i];
        }

        return sum - arrSum;

    }
}