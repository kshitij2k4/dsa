class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int m = nums.size();
        int maxcount = 0;
        
        int i=0;
        int j=0;
        
        while(i < m){
            
            if(nums[i] == 1){
                j++;
            }
            else{
                maxcount = max(j ,maxcount);
                j=0;
            }
            i++;
            
        }
        maxcount = max(j , maxcount);
        return maxcount;
    }
};
