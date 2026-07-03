class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        long long max=LLONG_MIN;
        long long sec=LLONG_MIN;
        long long third=LLONG_MIN;

        for(int i=0;i<n;i++){
            if(nums[i]==max || nums[i]==sec|| nums[i]==third)
                continue;
                if(nums[i]>max){
                    third=sec;
                    sec=max;
                    max=nums[i];
                }
                else if(nums[i]>sec){
                    third=sec;
                    sec=nums[i];

                }else if(nums[i]>third){
                    third=nums[i];
                }

        }
        return (third == LLONG_MIN)?max:third;

        
    }
};