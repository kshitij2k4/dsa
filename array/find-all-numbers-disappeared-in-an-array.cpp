class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin() , nums.end());

        int i=0;
        int n = nums.size();
        int j = 1;
        vector<int> result;
        while(i<n && j<= n){

            if(nums[i]==j){
                i++;
                j++;
            }
            else if(nums[i]<j){
                i++;
            }
            else{
                result.push_back(j);
                j++;
            }


        }
        while (j <= n) {
            result.push_back(j++);
        }

        return result;

    }
};
