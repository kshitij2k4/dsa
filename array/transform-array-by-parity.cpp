class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {

        int i=0;
        int j=1;

        int n = nums.size();

        while(i<n){

            nums[i] = nums[i] %2;
            i++;
        }

        sort(nums.begin() , nums.end());


      return nums;  
    }
};
