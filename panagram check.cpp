date:5/03/2022
// Problem Description
 
 

// Given a sentence represented as an array A of strings.
// Chech if it is a pangram or not.
// A pangram is a unique sentence in which every letter of the alphabet is used at least once.


// Problem Constraints
// 1 <= |A| <= 105
// 1 <= Ai <= 5


// Input Format
// Given an array of strings A.


// Output Format
// Return an integer.


// Example Input
// Input 1:
// A = ["the", "quick", "brown", "fox", "jumps", "over", "the", "lazy", "dog"]
// Input 2:

// A = ["interviewbit", "scaler"]

solution:
int Solution::solve(vector<string> &A) {
    vector<bool> mark(26,false);

    int index;
    for(int i=0;i<A.size();i++){
        for(int j=0;j<A[i].size();j++){
            if('A' <= A[i][j] && A[i][j] <= 'Z' ){
                index = A[i][j] - 'A';
            }
            else if('a' <= A[i][j] && A[i][j] <= 'z' ){
                index = A[i][j] - 'a';
            }
            mark[index] = true;
        }
    }
     for(int i=0;i<=25;i++){
         if(mark[i]==false){
            return(false);
         }

     }
     return(true);
}

