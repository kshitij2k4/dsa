class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        
        int n = operations.size();

        int i=0;
        int x=0;
        while(i<n){
            if(operations[i]== "--X"){
                x -=1;
                i++;
            }
            else if(operations[i]== "X++"){
                x +=1;
                i++;
            }
            else if(operations[i]== "++X"){
                x +=1;
                i++;
            }
            else if(operations[i]== "X--"){
                x -=1;
                i++;
            }
            else return -1;
        }
        return x;

    }
};
