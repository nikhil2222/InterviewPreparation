// Given a 2D integer array matrix, return the transpose of matrix.

// The transpose of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices.

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>> q( m , vector<int> (n, 0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                q[j][i]=matrix[i][j];
            }
        }
        return q;
    }
};