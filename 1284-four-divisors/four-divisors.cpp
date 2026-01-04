class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int sum = 0;
        for(int num : nums){
            int count = 0;
            int currentSum = 0;
            for(int j = 1; j<=sqrt(num); j++){
                if( num % j == 0 ){
                    if(j*j == num){
                        count++;
                        currentSum+=j;
                    }else{
                        count+=2;
                        currentSum += j;
                        currentSum += num/j;
                    }
                }
            }
            if(count != 4){
                continue;
            }else{
                sum += currentSum;
            }
        }
        return sum;
    }
};