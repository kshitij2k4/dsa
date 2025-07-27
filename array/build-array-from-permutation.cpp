class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {

        int i=0;
        int n= nums.size();

        vector<int>ans(n);

        while(i<n){

            ans[i]= nums[nums[i]];
            i++;
        }

        return ans;
        
    }
};
