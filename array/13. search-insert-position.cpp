class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int n = nums.size();

        int i =0;

        while(i<n){

            if(target > nums[i]){
                i++;
            }
            else{
                return i;
            }

        }
        return n;
        
    }
};
