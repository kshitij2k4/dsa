class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {

        int n = nums.size();

        int i=0;

        int g =0;

        while(i<n){
            
            int j = i+1;

            while(j<n){

                if(nums[i]== nums[j]){
                    g++;
                    j++;
                }
                else{
                    j++;
                }

            }
            i++;


        }

    return g;
        
    }
};
