
//BINARY TREE TRAVERSAL
#include <stdio.h>
#include<stdlib.h>

struct node{
    
    int data;
    struct node*left;
    struct node*right;
};

void in_order_traversal(struct node*root){
    if(root == NULL)
    return;
    in_order_traversal(root->left);
    printf("%d ->",root->data);
    in_order_traversal(root->right);
    
    
}

void pre_order_traversal(struct node*root){
    if(root == NULL)
    return ;
     printf("%d ->",root->data);
     pre_order_traversal(root->left);
     pre_order_traversal(root->right);
     
    
}

void post_order_traversal( struct node*root){
    if(root == NULL)
    return ;
    post_order_traversal(root->left);
    post_order_traversal(root->right);
     printf("%d ->",root->data);
}

struct node*createNode(int value){
    struct node*newNode = malloc(sizeof(struct node));
    newNode->data= value;
    newNode->left= NULL;
    newNode->right= NULL;
    
    return newNode;
}
struct node*insertLeft(struct node*root,int value){
    root->left= createNode(value);
    return root->left;
    
}
struct node*insertRight(struct node*root,int value){
 root->right = createNode(value);
 return root->right;
 
}
int main()
{

struct node*root = createNode(1);
insertLeft(root,12);
insertRight(root,9);
insertLeft(root->left,5);
insertRight(root->right,6);
//insertLeft(root->right->left,5);//right xa tra data dekhayena .

printf("\nINorder traversal \n");
in_order_traversal(root);
printf("\nPre order traversal \n");
pre_order_traversal(root);
printf("\nPost order traversal \n");
post_order_traversal(root);
return 0;



}