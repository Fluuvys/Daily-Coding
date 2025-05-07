// Problem: Compute the maximum value of an array. Return the index of the maximum value in an array.
// Input Description: The first line contains a positive integer n, which is the length of the input array.
// The second line contains n elements of the array.
// Output Description: The index of the maximum value in an array. If there are 2 or more elements with the same value as the maximum value, print all the indices of those numbers out, separated by spaces.
// Note:
// Value in an array count from 0
// If n <= 0 print "Error"

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);


    if (n <= 0) {
        printf("Error\n");
        return 0;
    }

    double a[n]; 
    int max_indices[n]; 
    int count = 0;  


    for (int i = 0; i < n; ++i) {
        scanf("%lf", &a[i]);
    }


    double max = a[0];
    max_indices[0] = 0;
    for(int i = 0;i<n+1; ++i){
        if(a[i]>max){
            max = a[i];
            count = 1;
            max_indices[0] = i;
        }
        else if(a[i] == max){
            max_indices[count] = i;
            count++;

        }
    }
    for(int i =0;i<count;i++){
        printf("%d ", max_indices[i]);
    }

    return 0;
}
