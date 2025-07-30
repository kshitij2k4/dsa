class Solution {
public:
    string reversePrefix(string word, char ch) {

        int n = word.size();

        int index = word.find(ch);

        int i =0;

        while(i<index){
            swap(word[i],word[index]);
            i++;
            index--;
        }
        
        return word;
    }
};
