class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = 0;
        int high = 0;
        for (int w : weights) {
            low = max(low, w);
            high += w;
        }
        int ans = high;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (helper(weights, mid, days)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }

    bool helper(vector<int>& arr, int cap, int days) {
        int count = 1;
        int totalSum = 0;
        for (int a : arr) {
            if (totalSum + a <= cap) {
                totalSum += a;
            } else {
                count++;
                totalSum = a;
            }
        }
        return count <= days;
    }
};