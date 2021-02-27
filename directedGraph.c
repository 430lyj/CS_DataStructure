#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int index;
    int distance;
    struct Node *next;
}Node;

void addFront(Node *root,int index, int distance){
    Node *node = (Node*) malloc(sizeof(Node));
    node->index = index;
    node->distance = distance;
    node->next = root->next;
    root->next = node;
}

void showAll(Node *root){
    Node *cur = root->next;
    while(cur != NULL){
        printf("%i(Distance : %i) ", cur->index, cur->distance);
        cur = cur->next;
    }
    printf("\n");
}

int main (void){
    int n, m;
    //n is number of node, m is number of edge
    Node** a = (Node**) malloc (sizeof(Node*) * n + 1);
    scanf("%i %i", &n, &m);
    for(int i = 1; i <= n; i++){
        a[i] = (Node*) malloc(sizeof(Node));
        a[i]->next = NULL;
    }
    int x, y, distance;
    for(int i = 0; i < m ; i++){
        scanf("%i %i %i", &x, &y, &distance);
        addFront(a[x], y, distance);
    }
    for(int i = 1; i <= n; i++){
        printf("Vertex [%i] : ", i);
        showAll(a[i]);
        printf("\n");
    }
    return 0;
}


