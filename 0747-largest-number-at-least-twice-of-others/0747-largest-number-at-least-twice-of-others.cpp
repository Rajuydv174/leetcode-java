class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max = INT_MIN;
       int sec = INT_MIN;
        int index = -1;

      int n=nums.size();
       for(int i=0;i<n;i++){
         if(nums[i]>max){
            sec=max;
            max=nums[i];
            index=i;
         }else if(nums[i]>sec){
            sec=nums[i];
         }
       } if (max>=2*sec){
        return index;
       }else{
        return -1;
       }
    }
};