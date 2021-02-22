#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* leftChild;
    struct Node* rightChild;
}Node;


Node* init(int data, Node* leftChild, Node* rightChild){
    Node *node = (Node*) malloc(sizeof(Node));
    node->data = data;
    node->leftChild = leftChild;
    node->rightChild = rightChild;
    return node;
}

void preorder(Node* root){
    if(root != NULL){
        printf("%i ", root->data);
        preorder(root->leftChild);
        preorder(root->rightChild);
    }
}

void inorder(Node* root){
    if(root != NULL){
        inorder(root->leftChild);
        printf("%i ", root->data);
        inorder(root->rightChild);
    }
}

void postorder(Node* root){
    if(root != NULL){
        postorder(root->leftChild);
        postorder(root->rightChild);
        printf("%i ", root->data);
        
    }
}

int main(void){
    Node *node = (Node*) malloc(sizeof(Node));
    node->leftChild = NULL;
    node->rightChild = NULL;
    Node *n4 = init(5, NULL, NULL);
    Node *n5 = init(23, NULL, NULL);
    Node *n6 = init(37, NULL, NULL);
    Node *n7 = init(50, NULL, NULL);
    Node *n2 = init(17, n4, n5);
    Node *n3 = init(48, n6, n7);
    Node *n1 = init(30, n2, n3);

    preorder(n1);
    printf("\n");
    inorder(n1);
    printf("\n");
    postorder(n1);
    printf("\n");

}
