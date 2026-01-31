class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = 0;
        for(int p : piles){
            high = max(high, p);
        }
        int ans = high;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(canEat(piles,mid,h)){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return ans;
    }

    bool canEat(vector<int> &arr, int max, int hours){
        int totalHours = 0;
        for(int a : arr){
            int time = 0;
            time = a/max;
            if(a%max != 0){
                time++;
            }
            totalHours += time;
            if(totalHours>hours) return false;
        }
        return totalHours <= hours;
    }
};