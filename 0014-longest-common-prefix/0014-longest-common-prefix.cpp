class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        int minLen = strs[0].size();

        for (int i = 1; i < strs.size(); i++) {
            minLen = min(minLen, (int)strs[i].size());
        }

        string ans = "";

        for (int i = 0; i < minLen; i++) {

            char ch = strs[0][i];

            for (int j = 1; j < strs.size(); j++) {
                if (strs[j][i] != ch)
                    return ans;
            }

            ans += ch;
        }

        return ans;
    }
};