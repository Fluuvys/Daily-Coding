// Problem:

// Read n integers into an array, print the input values from last to first, then sum the elements of the array.

// Note:

// If n <= 0 print "Error"

// Input Description: The first line contains a positive integer n, which is the length of the input array. 

// The second line contains n integers.

// Output Description: The first output line is the elements of the array printed in reversed order.
// The second output line is the sum of elements of the array
// For example:

// Input	Result
// 5
// 1 2 3 4 5
// 5 4 3 2 1
// 15

#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if(n<=0){
        printf("Error");
    }
    else{
        int a[n];   
        int sum = 0;
        for(int i = 0; i<n; ++i){
            scanf("%d", &a[i]);
        }
        for (int i = n-1; i>=0; --i){
            if(i == 0){
                printf("%d\n", a[i]);
                sum+=a[i];
            }
            else{
                printf("%d ", a[i]);
                sum+=a[i];
            }
        }
        printf("%d", sum);}
    
    return 0;
}