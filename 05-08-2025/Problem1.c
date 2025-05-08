// Problem:

// Write a program that sorts an array into ascending order. 

// Note: 

// First, read an integer N (the number of elements of the array), then read N integers – elements of the array. 

// The program needs to print N elements of the array in ascending order.

// Input Description:
// - First-line contains an integer N – the number of elements of the array.
// - Second-line contains N integers – the elements of the array.

// Output Description:
// First-line contains N integers – elements of the array after sorting.


// Example:


// Input:

// 5

// 1 4 3 5 2

// Output: 1 2 3 4 5

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0;i<n;++i){
        scanf("%d", &a[i]);
    }
    
    
    int temp;
    for(int i = 0;i<n-1; i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j+1]<a[j]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(int i =0;i<n;++i){
        printf("%d ", a[i]);
    }
    
    return 0;
}