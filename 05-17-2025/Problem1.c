#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i =0;i<n;i++){
        scanf("%d", &a[i]);
    }

    int ans[1000] = {0};
    int min = a[0];
    for(int i = 0;i<n;i++){
        if (a[i] < min){
            min = a[i];
        }
    }
    for(int i = 0;i<n;i++){
        if(a[i] == min){
            ans[i]+=1;
        }
    }

    for(int i = 0;i<n;i++){
        if(ans[i]!=0){
            printf("%d ", i);
        }
    }

    return 0;
}