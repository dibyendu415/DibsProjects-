//we have to find the max height of the binary tree 
//We will use the recursive aproach to find the height of the tree
//Credits:Ashu Yadav

#include<bits/stdc++.h>
using namespace std;
//Finding the height of the tree
int height(node* node)  
{  
    //base case to terminate the rec call
    if (node == NULL)  
        return 0;  
    else
    {  
        int lefth = height(node->left);  
        int righth = height(node->right);  
      
        if (lefth > righth)  
            return(lefth + 1);  
        else return(righth + 1);  
    }  
}  
//A node class to define the char of a node
class node  
{  
    public: 
    int data;  
    //pointers for pointing the left subtree and rightsubtree nodes
    node* left;  
    node* right;  
};

//for making new nodes
node* nnode(int value)  
{  
    node* Node = new node(); 
    Node->data = value;  
    Node->left = NULL;  
    Node->right = NULL;  
      
    return(Node);  
}  
int main(){
    //Here we can take the data from the user of can pre define the data 
    //use "nnode" function to make new node and assigning values to it
    
    //finally we can call height function defined to get the height of the tree
    cout<<height(root)<<endl;
    return 0;
}