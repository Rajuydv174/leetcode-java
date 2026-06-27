class Solution {
    public double largestSumOfAverages(int[] nums, int k) {
        int n = nums.length;
        
        double[] prefix = new double[n + 1];
        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + nums[i];
        }

        double[][] dp = new double[n + 1][k + 1];

        // Base case: 1 partition
        for (int i = 0; i < n; i++) {
            dp[i][1] = (prefix[n] - prefix[i]) / (n - i);
        }

        for (int part = 2; part <= k; part++) {
            for (int i = 0; i <= n - part; i++) {
                for (int j = i; j <= n - part; j++) {
                    double avg = (prefix[j + 1] - prefix[i]) / (j - i + 1);
                    dp[i][part] = Math.max(dp[i][part], avg + dp[j + 1][part - 1]);
                }
            }
        }

        return dp[0][k];
    }
}