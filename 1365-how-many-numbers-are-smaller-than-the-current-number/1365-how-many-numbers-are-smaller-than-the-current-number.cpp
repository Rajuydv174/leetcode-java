class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int freq[101] = {0};
        for (int x : nums) {
            freq[x]++;
        }

        
        int count = 0;

        for (int i = 0; i <= 100; i++) {
            int temp = freq[i];
            freq[i] = count;
            count += temp;
        }

        
        vector<int> ans;

        for (int x : nums) {
            ans.push_back(freq[x]);
        }

        return ans;
    }
};