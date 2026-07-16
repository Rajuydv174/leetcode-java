class Solution {
public:
    int strStr(string haystack, string needle) {

        int m = haystack.length();
        int n = needle.length();

        // Har possible starting index check karo
        for (int i = 0; i <= m - n; i++) {

            int j = 0;

            // Character by character compare karo
            while (j < n && haystack[i + j] == needle[j]) {
                j++;
            }

            // Agar poora needle match ho gaya
            if (j == n) {
                return i;
            }
        }

        // Kahin bhi match nahi mila
        return -1;
    }
};