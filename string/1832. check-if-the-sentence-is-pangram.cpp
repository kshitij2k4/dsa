class Solution {
public:
    bool checkIfPangram(string sentence) {

        unordered_set<char> ch;
        int n = sentence.size();
        int i=0;
        while(i<n){

            ch.insert(sentence[i]);
            i++;

        }
        
        return (ch.size()==26);
    }
};
