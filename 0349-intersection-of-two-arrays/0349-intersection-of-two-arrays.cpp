class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1;
        unordered_set<int> ans;

        
        for (int num : nums1) {
            s1.insert(num);
        }

    
        for (int num : nums2) {
            if (s1.find(num) != s1.end()) {
                ans.insert(num);
            }
        }

        
        vector<int> result(ans.begin(), ans.end());

        return result;
    }
};