class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int size = score.size();
        vector<int> sortedScores = score;
        sort(sortedScores.begin(), sortedScores.end(), greater<int>());
        vector<string> ans(size);

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (score[i] == sortedScores[j]) {
                    if (j == 0) {
                        ans[i] = "Gold Medal";
                    } else if (j == 1) {
                        ans[i] = "Silver Medal";
                    } else if (j == 2) {
                        ans[i] = "Bronze Medal";
                    } else {
                        ans[i] = to_string(j + 1);
                    }
                    break;
                }
            }
        }
        return ans;
    }
};