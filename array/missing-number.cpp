class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int i=0;

        while(i < n){
            if(nums[i] == i){
                i++;
            }
            else return i;

        }
        return n;
    }
};
