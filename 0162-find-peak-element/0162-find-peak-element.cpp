class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
      //  int max= INT_MIN;
      int index=0;
        int max=nums[0];
        for(int i=1;i<n;i++){
        //    int nums[0] =max;
            if(nums[i]>max){
                max=nums[i];
                index=i;
            }
            
        }
        return index;
    }
};