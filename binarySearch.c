#define _SRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_SIZE 10000

int a[MAX_SIZE];
int founded = 0;

int search(int start, int end, int target){
    if(start > end) return -9999;
    int mid = (start + end) / 2;
    if (a[mid] == target){
        return mid;
    }
    else if (a[mid] > target){
        return search(start, mid - 1, target);
    }
    else{
        return search(mid + 1, end, target);
    }
}

int main(void){
    int n, m, target;
    scanf("%i %i", &n, &target);
    for(int i = 0; i < n; i++){
        scanf("%i", &a[i]);
    }
    int res = search(0, n - 1, target);
    if(res != -9999) printf("%i is in %ith number.\n", target, res + 1);
    else printf("Fail to find.\n");

}