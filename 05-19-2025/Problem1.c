#include <stdio.h>
#include <math.h>

int is_prime(int a){
    if(a<=1){
        return 0;
    }
    else{
        for(int i =2; i<=sqrt(a); i++){
            if(a%i==0){
                return 0;
            }
        }
        return 1;
    }
}




int main(){ 
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i = 0;i<n;i++){
        scanf("%d", &a[i]);
    }

    //Loop through and find primes
    int primes = 0;
    for(int i = 0; i<n; i++){
        if(is_prime(a[i]) == 1){
            primes++;
        }
    }

    printf("%d", primes);




    return 0;
}