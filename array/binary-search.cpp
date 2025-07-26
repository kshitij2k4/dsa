class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        
        int mid;
        int end = nums.size() -1;
        int start = 0;
        mid = (start + end)/2;


        while(start <= end){

            mid = (start + end)/2;
            
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid]<= target){
                start = mid +1;
            }
            else{
                end = mid -1;
            }
        }

        return -1;
    }
};
