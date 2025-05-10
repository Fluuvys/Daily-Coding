// Problem:

// Write a program that reads two matrices: 

// Matrix X of size M*N (M rows, N columns). 

// Matrix Y of size N*K (N rows, K columns). 

// Do multiplication of matrices X and Y, store the result in matrix Z (Z=X*Y)

// Input Description: 
// First-line contains 3 numbers M, N, K.
// Line 2 to line M+1: Each line i (2<=i<=M+1) contains N integers denoting the  row of matrix X.
// Line M+2 to line M+N+1: Each line i (M+2<=i<=M+N+1) contains K integers denoting the  row of matrix Y.

// Output Description:
// Line 1 to line M: Each line I (1<=i<=K) contains K integers denoting the  row of matrix Z. 

// Example:

// Input: 2 2 2
// 1 1
// 2 2
// 1 2
// 3 4
// Output: 4 6
// 8 12

#include <stdio.h>


int main(){    
    int m, n, k;
    scanf("%d %d %d", &m, &n, &k);
    int x[m][n];
    int y[n][k];
    int z[m][k];
    //handle matrix x
    for (int i =2; i<=m+1; ++i){
        for(int j = 0; j<n; ++j){
            scanf("%d ", &x[i-2][j]);
        }
    }
    //handle matrix y
    for(int i = m+2; i<=m+n+1; ++i){
        for(int j = 0; j<k; ++j){
            scanf("%d ", &y[i-m-2][j]);
        }
    }
    
    //multiply matrices
    for(int i = 0;i<m; ++i){
        for(int j=0;j<k;++j){
            z[i][j] = 0;
            for(int a = 0; a<n;++a){
                z[i][j] += x[i][a] *y[a][j];
            }
        }
    }
    
    for(int i = 0; i<m; ++i){
        for (int j=0;j<k; ++j){
            printf("%d", z[i][j]);
            if(j!=k-1){
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}