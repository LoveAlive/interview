//level order traversal in cpp 
include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data ;
    Node* left; 
    Node* right ; 
    
    Node(int x)
    {
        data = x; 
        left = NULL;
        right = NULL;
    }
};

void level_order(Node* root)
{
    std::queue<Node*> s;
    if(!root) return ;
    Node *temp = new Node(-10000);
    s.push(root);
    while(!s.empty())
    {
        temp = s.front();
        cout<<temp->data<<" "; 
        if(temp->left != NULL) s.push(temp->left);
        if(temp->right != NULL) s.push(temp->right);
        s.pop();
    }
    
}
//main function
int main()
{
    Node* root = new Node(1);
    
    root->left = new Node(6);
    root->right = new Node(9);
    root->left->left = new Node(2);
    root->left->right = new Node(0);
    root->right->left = new Node(5);
    root->right->right = new Node(7);
    
    level_order(root);
    
}
