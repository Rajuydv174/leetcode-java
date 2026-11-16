class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int left=0;
        int n=people.size();
        int right=n-1;
        int count=0;
        while(left<=right){
            int sum=people[left]+people[right];
            if(sum<=limit){
                left++;
                right--;
                count++;
            }else{
                right--;
                count++;
            }
            
        }
        return count;
    }
};