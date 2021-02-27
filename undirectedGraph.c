#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int a[1001][1001];
// n is number of node / vertex
// m is number of edge
int n, m;

int main (void){
    scanf("%i %i", &n, &m);
    for(int i = 0; i < m; i++){
        int x, y;
        scanf("%i %i", &x, &y);
        a[x][y] = 1; //x : current index, y : target index
        a[y][x] = 1; //x : target index, y : current index
    }
    //Assume the array of node starts from count 1
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            //Adjaceney matrix : number itself is counted as they have edge
            if(i == j){
                a[i][j] = 1;
            }
            printf("%i", a[i][j]);
        }
        printf("\n");
    }

}