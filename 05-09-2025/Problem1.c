// Problem:

// Write a program that reads an array of N float numbers. Add one element x before the  element. 

// Note: 

// The elements of the array are indexed from 1 to N. 

// If k=n+1, insert x after the last element of the array. 

// Check if  element exists or k=n+1. If not, print “Error”. 

// Round all float numbers to 1 decimal place.

// Input Description:
// First-line contains number N – the number of elements of the array.
// Second-line contains N float numbers – elements of the array.
// The third line contains two numbers k x – the position to insert and the value of the number to insert.
// Output Description: -First line contains N+1 elements of the array after inserting number x at position 

// Example:


// Input:

// 5

// 1.0 2.0 3.0 4.0 5.0 

// 3 9.0

// Output: 1.0 2.0 9.0 3.0 4.0 5.0

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    double a[n];
    for (int i = 0; i < n; i++) {
        scanf("%lf", &a[i]);
    }

    int k;
    double x;
    scanf("%d %lf", &k, &x);

    if (k < 1 || k > n + 1) {
        printf("Error");
        return 0; 
    }

    double b[n + 1];

    if (k <= n) {
        for (int i = 0; i < k - 1; i++) {
            b[i] = a[i];
        }
        b[k - 1] = x;
        for (int i = k; i < n + 1; i++) {
            b[i] = a[i - 1];
        }
    } else { 
        for (int i = 0; i < n; i++) {
            b[i] = a[i];
        }
        b[n] = x;
    }

    for (int i = 0; i < n + 1; i++) {
        printf("%.1lf ", b[i]);
    }

    return 0;
}
