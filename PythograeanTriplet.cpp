// Problem Description
 
 

// A Pythagorean triplet is a set of three integers a, b and c such that a2 + b2 = c2.
// Find the number of pythagorean triplets such that all the elements of the triplet are less than or equal to A.


// Problem Constraints
// 1 <= A <= 103


// Input Format
// Given an integer A.


// Output Format
// Return an integer.


// Example Input
// Input 1:
// A = 5
// Input 2:

// A = 13


// Example Output
// Output 1:
// 1
// Output 2:

// 3


// Example Explanation
// Explanation 1:
// Then only triplet is {3, 4, 5}
// Explanation 2:

// The triplets are {3, 4, 5}, {6, 8, 10}, {5, 12, 13}.
int Solution::solve(int A) {
    int count=0;
    for(int a = 1;a<A-1;a++){
        for(int b=a+1;b<A;b++){
            for(int c=b+1;c<A+1;c++){
                int x=a*a;
                int y=b*b;
                int z = c*c;
                if(x+y==z){
                  count++;
                }
            }
        }
    }
    return count;
}
