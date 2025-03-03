class Solution {
    public int thirdMax(int[] nums) {
        if (nums.length < 3) {
            int max = Integer.MIN_VALUE;
            for (int num : nums) {
                max = Math.max(max, num);
            }
            return max;
        }

        Arrays.sort(nums);
        
        int count = 1;  
        int thirdMax = nums[nums.length - 1]; 
        
        for (int i = nums.length - 2; i >= 0; i--) {
            if (nums[i] != nums[i + 1]) {
                count++;
                if (count == 3) {
                    thirdMax = nums[i];
                    break;
                }
            }
        }
        return count == 3 ? thirdMax : nums[nums.length - 1];
    }
}