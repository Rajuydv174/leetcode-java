class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        int E=0;
        int O=1;
        while(E<n && O<n){
            while(E<n && nums[E]%2==0){
                E+=2;
            }
             while(O<n && nums[O]%2!=0){
                O+=2;
            }
            if(E<n && O<n){
                swap(nums[E],nums[O]);
            }
        }
        return nums;
    }
};