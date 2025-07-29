class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int n = nums.size();
        int i = 0;
        int count = 0;
        
        while(i<n){
            int temp =0;
            int num = nums[i];
            
            while(num != 0){
                num = num/10;
                temp++;
            }
            
            if(temp % 2 ==0){
                count++;
            }
            
            i++;
            
        }
        return count;
        
    }
};
