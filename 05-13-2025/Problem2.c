// Problem:
// Write a program that reads two strings S and T and an integer N. Check if string T occurs in the suffix of S starting at position N.

// Note:
// Strings are indexed from 0.
// The suffix of S starting at position N is the last |S|-N characters of S. |S| is the length of S.
// Input Description: 
// String S
// String T
// Integer N

// Output Description: Print “1” if string T occurs in string S after position N, else print “0”.

// Example:
// Input: abcdbca
// bc
// 4 
// Output: 1




#include <stdio.h>
#include <string.h>


int main(){
    char S[1001];
    char T[1001];
    char temp[1001];
    int n;
    
    fgets(S, sizeof(S), stdin);
    size_t lenS=strlen(S);
    if (lenS >0 && S[lenS-1] == '\n'){
        S[lenS-1] = '\0';
        lenS--;
    }
    
    fgets(T, sizeof(T), stdin);
    size_t lenT = strlen(T);
    if(lenT>0 && T[lenT-1] == '\n'){
        T[lenT-1] = '\0';
        lenT--;
    }
    scanf("%d", &n);

    if(lenT > lenS-n || n>lenS){
        printf("0\n");
    }
    else{
        int a = 0;
        for(int i = 0; i<lenS-n-lenT+1; ++i){
            int match = 1;
            for(int j = 0; j<lenT; ++j){
                if(S[i+j+n] != T[j]){
                    match = 0;
                    break;
                }
            }
            if (match == 1){
                a=1;
            }
        } 
        if(a == 1){
            printf("1");
        }     
        else{
            printf("0");
        }
    }
    
    return 0;
}