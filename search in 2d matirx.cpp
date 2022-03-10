// Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

// Integers in each row are sorted from left to right.
// The first integer of each row is greater than the last integer of the previous row.
//  
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int temp = 0;
        int l=matrix[0].size()-1;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
            if(matrix[i][l]>=target){
                     if(matrix[i][j]==target){
                    temp = 1;
                    break;
                }
                    else{
                        continue;
                    }
               
                }
                
            }
        }
        if(temp == 1){
            return true;
        }
        else{
            return false;
        }
        
    }
};