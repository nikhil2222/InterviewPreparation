// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

// You must do it in place.
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int> row(matrix[0].size(),1);
        vector<int> col(matrix.size(),1);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j] == 0){
                    row[j]=0;
                    col[i]=0;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(row[j]==0 || col[i]==0){
                    matrix[i][j]=0;
                }
                else{
                    continue;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
              cout<<matrix[i][j];
            }
        }
       
    }
};