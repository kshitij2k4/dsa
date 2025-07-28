class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int n = candies.size();
        int m = *max_element(candies.begin(), candies.end());

        int i =0;
        vector<bool>result;

        while(i<n){

            if(candies[i]+ extraCandies >= m){
                result.push_back(true);
                i++;
            }
            else {
                result.push_back(false);
                i++;
            }
       
        }
    return result;

    }
};
