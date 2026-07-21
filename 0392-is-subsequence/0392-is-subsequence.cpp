class Solution {
public:
    bool isSubsequence(string s, string t) {

        int i = 0; // s ke liye pointer
        int j = 0; // t ke liye pointer

        // Jab tak dono strings khatam nahi hoti
        while (i < s.length() && j < t.length()) {

            // Agar character match hua
            if (s[i] == t[j]) {
                i++; // s ke next character par jao
            }

            // t ka pointer hamesha aage badhega
            j++;
        }

        // Agar s ke saare characters match ho gaye
        if (i == s.length()) {
            return true;
        }

        return false;
    }
};