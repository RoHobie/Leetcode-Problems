class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        stack<int> order;
        int count = -1;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] != 0){
                order.push(nums[i]);
                nums[i] = 0;
                count++;
            }
        }
        while(!order.empty()){
            int x = order.top();
            nums[count] = x;
            order.pop();
            count--;
        }
    }
};
