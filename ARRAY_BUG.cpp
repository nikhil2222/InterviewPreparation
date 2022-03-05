// date=6/02/2022
// The following code is supposed to rotate the array A by B positions.

// So, for example,


// A : [1 2 3 4 5 6]
// B : 1

// The output :

// [2 3 4 5 6 1]
solution 
vector<int> Solution::rotateArray(vector<int> &A, int B) {
	vector<int> ret; 
    int t = A.size();
    int loop = B%t;
    
	for (int i = loop; i < A.size(); i++) {
		ret.push_back(A[i]);
	}
    for(int i=0;i<loop;i++){
        ret.push_back(A[i]);
    }
	return ret; 
}
