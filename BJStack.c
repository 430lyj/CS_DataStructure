#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct Node{
    int data;
    struct Node *next;
}Node;

typedef struct{
    Node *top;
}Stack;



void push(int data, Stack *stack){
    Node *node = (Node*) malloc(sizeof(Node));
    node->data = data;
    node->next = stack->top;
    stack->top = node;
}

int pop(Stack *stack){
    if(stack->top == NULL){
        printf("-1\n");
        return -1;
    }
    else{
        Node *node = (Node*) malloc(sizeof(Node));
        node = stack->top;
        printf("%i\n", node->data);
        stack->top = node->next;
        free(node);
        return 0;
    }
}

int size(Stack *stack){
    int counter = 0;
    Node *node = (Node*) malloc(sizeof(Node));
    node = stack->top;
    while(node != NULL){
        counter++;
        node = node->next;
    }
    printf("%i\n", counter);
    return counter;
}

int empty(Stack *stack){
    if(stack->top == NULL){
        printf("1\n");
        return 1;
    }
    printf("0\n");
    return 0;
}

int top(Stack *stack){
    if(stack->top == NULL){
        printf("-1\n");
        return -1;
    }
    printf("%i\n", stack->top->data);
    return stack->top->data;
}

int main (void){
    Stack stack;
    stack.top = NULL;
    char command[6];
    int data, N;
    scanf("%i", &N);
    for(int i = 0; i < N; i++){
        scanf("%s", command);
        if(strcmp(command, "push") == 0){
            scanf("%i", &data);
            push(data, &stack);
        }
        else if(strcmp(command, "pop") == 0){
            pop(&stack);
        }
        else if(strcmp(command, "size") == 0){
            size(&stack);
        }
        else if(strcmp(command, "empty") == 0){
            empty(&stack);
        }
        else if(strcmp(command, "top") == 0){
            top(&stack);
        }
        else{
            printf("Wrong input! Please type push, pop, size or empty.\n");
        }
    }
    return 0;
}
