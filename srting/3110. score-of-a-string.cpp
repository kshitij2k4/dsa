class Solution {
public:
    int scoreOfString(string s) {

        int n = s.size();
        int i=0;
        int sum = 0;
        while(i<n-1){

            int a = s[i];
            int b = s[i+1];
            int sub = abs(a-b);
            sum += sub;
            i++;

        }
        
        return sum;
    }
};
