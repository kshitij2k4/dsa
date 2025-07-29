class Solution {
public:
    void reverseString(vector<char>& s) {

        int n = s.size();
        vector<char>d(n);
        int i=0;

        while(i<n){

            d[n-1-i] = s[i];


            i++;
        }
        
        s = d;

    }
};
