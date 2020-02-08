//Implementation of various tree traversal techniques
//Credtis:Ashu Yadav

#include<bits/stdc++.h>
using namespace std;
//Char of node
struct Node 
{ 
    int data; 
    struct Node* left, *right; 
    Node(int data) 
    { 
        this->data = data; 
        left = right = NULL; 
    } 
}; 
//function to print postorder
void Postorder(struct Node *node){
    //base case to terminate rec
    if(node==NULL)return;
    //left subtree
    Postorder(node->left);
    //right subtree
    Postorder(node->right);
    //print data of node
    cout<<node->data<<" "; 
}

//function to print preorder
void Preorder(struct Node *node){
    //base case to terminate rec
    if(node==NULL)return;
    //print data of node
    cout<<node->data<<" ";
    //left subtree
    Preorder(node->left);
    //right subtree
    Preorder(node->right); 
}

//function to print inorder
void Inorder(struct Node *node){
    //base case to terminate rec
    if(node==NULL)return;
    //left subtree
    Inorder(node->left);
    //print data of node
    cout<<node->data<<" ";
    //right subtree
    Inorder(node->right); 
}
int main(){
    //Here we can take the data from the user of can pre define the data 
    //use "nnode" function to make new node and assigning values to it
    
    //prints preorder traversal
    cout<<Preorder(root)<<endl;
    //prints postorder traversal
    cout<<Postorder(root)<<endl;
    //prints inorder traversal of the tree
    cout<<Inorder(root)<<endl;
    return 0;
}