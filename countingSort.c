#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_VALUE 10000

int n, m;
int a[MAX_VALUE];

int main(void){
    scanf("%i", &n);
    for(int i = 0; i < n; i++){
        scanf("%i", &m);
        if(m <= 10000 && m > 0){
            a[m]++;
        }  
        else{
            return -1;
        }
    }
    for(int i = 0; i < MAX_VALUE; i++){
        while(a[i] != 0){
            printf("%i\n", i);
            a[i]--;
        }
    }
    return 0;
}