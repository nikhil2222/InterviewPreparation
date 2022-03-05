date: 5/03/2022
// Given a matrix of m * n elements (m rows, n columns), return all elements of the matrix in spiral order.

// Example:

// Given the following matrix:

// [
//     [ 1, 2, 3 ],
//     [ 4, 5, 6 ],
//     [ 7, 8, 9 ]
// ]
// You should return

// [1, 2, 3, 6, 9, 8, 7, 4, 5]




vector<int> Solution::spiralOrder(const vector<vector<int> > &a) {
       vector<int> p;
    
    int i;
    int k=0, m= a.size(),n = a[0].size() , l=0;
    while (k < m && l < n) {
        /* Print the first row from
               the remaining rows */
        for (i = l; i < n; ++i) {
            p.push_back(a[k][i]);
        }
        k++;
 
        /* Print the last column
         from the remaining columns */
        for (i = k; i < m; ++i) {
            p.push_back(a[i][n - 1]);
        }
        n--;
 
        /* Print the last row from
                the remaining rows */
        if (k < m) {
            for (i = n - 1; i >= l; --i) {
                p.push_back(a[m - 1][i]);
            }
            m--;
        }
 
        /* Print the first column from
                   the remaining columns */
        if (l < n) {
            for (i = m - 1; i >= k; --i) {
                p.push_back(a[i][l]);
            }
            l++;
        }
    }
return p;

}

//my tried solution
 vector<int> p;
    
    
    int t=0, b = A.size(),r = A[0].size() , l=0;
    int dir = 0;
    while(t<=b && l<r){
        if(dir == 0){
            for(int i=l;i<r;i++){
                p.push_back(A[t][i]);
                t++;
                dir = 1;
            }
        }
        else if(dir == 1){
            for(int i=t;i<b;i++){
                p.push_back(A[i][r]);
                r--;
                dir = 2;
            }
        }
        else if(dir == 2){
            for(int i=r;i<l;i++){
                p.push_back(A[b][i]);
                b--;
                dir=3;
            }
        }
        else if(dir == 3){
            for(int i=b;b<t;b++){
                p.push_back(A[i][l]);
                l--;
                dir=0;
            }
        }
    }
    return p;