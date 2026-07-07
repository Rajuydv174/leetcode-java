class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {

        int n = mat.size();
        int sum = 0;

        for (int i = 0; i < n; i++) {

            // Primary Diagonal
            sum += mat[i][i];

            // Secondary Diagonal
            sum += mat[i][n - i - 1];
        }

        // Remove duplicate center element
        if (n % 2 == 1)
            sum -= mat[n / 2][n / 2];

        return sum;
    }
};