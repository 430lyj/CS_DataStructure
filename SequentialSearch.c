#define _SRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LENGTH 100

char **array;
int founded;

int main(void){
    int n;
    char *word;
    scanf("%i %s", &n, word);
    array = (char**) malloc(sizeof(char*) * n);
    for(int i = 0; i < n; i++){
        array[i] = malloc(sizeof(char*) * LENGTH);
        scanf("%s", array[i]);
    }
    for(int i = 0; i < n; i++){
        if(!strcmp(array[i], word)){
            printf("%s is in %ith number.\n", word, i + 1);
            founded = 1;
        }
    }
    if(!founded){
            printf("Fail to find '%s'.\n", word);
    }
}