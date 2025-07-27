class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {

        int n = nums.size();
        int i=0;
        int j = 2*n;

        vector<int> ans(j);

        while(i<n){

            ans[i] = nums[i];
            ans[i+n] = nums[i];
            i++;

        }

        return ans;

    }
};
