// Problem Description
 
 


// You are given an array of 0s and 1s in random order. Segregate 0s on left side and 1s on right side of the array [Basically you have to sort the array]. Traverse array only once. 



// Problem Constraints
// 1<=|A|<=1e6


// Input Format
// First argument is array of integers consisting of 0's and 1's only.


// Output Format
// Return a sorted array.


// Example Input
// Input 1:
// a=[0 1 0]
// Input 2:

// A=[1 1 0 ]


// Example Output
// Ouput 1:
// [0 0 1]
// Ouput 2:

// [0 1 1]


// Example Explanation
// Explanation 1:
//  above is sorted array.
// Explanation 2:

// sort the array.
vector<int> Solution::solve(vector<int> &A) {
    int count=0;
    
    for(int i=0;i<A.size();i++){
       if(A[i]==0){
           count++;
       }
    }
    
    for(int j=0;j<count;j++){
        A[j] = 0;
    }
    for(int j=count;j<A.size();j++){
        A[j] = 1;
    }
    return A;
}
