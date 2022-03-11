// There is a robot on an m x n grid. The robot is initially located at the top-left corner (i.e., grid[0][0]). The robot tries to move to the bottom-right corner (i.e., grid[m - 1][n - 1]). The robot can only move either down or right at any point in time.

// Given the two integers m and n, return the number of possible unique paths that the robot can take to reach the bottom-right corner.

// The test cases are generated so that the answer will be less than or equal to 2 * 109.
brute force solution 
class Solution {
public:
    int uniquePaths(int m, int n) {
       int l =  countpath(0,0,m,n);
        return l;
    }
    
    int countpath(int i,int j,int m,int n){
        if(i==(m-1) || j==(n-1)) return 1;
        if(i>=m || j>=n) return 0;
        else return countpath(i+1,j,m,n) + countpath(i,j+1,m,n);
    }
};

better:
class Solution {
public:
   int countPaths(int i,int j,int n,int m,vector<vector<int>> &dp)
    {
        if(i==(n-1)&&j==(m-1)) return 1;
        if(i>=n||j>=m) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
     else return dp[i][j]=countPaths(i+1,j,n,m,dp)+countPaths(i,j+1,n,m,dp);
        
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
       
        //dp[1][1]=1;
       int num=countPaths(0,0,m,n,dp);
        
        return num;
    }
};

best:
