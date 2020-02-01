inorder traversal in trees non recursive 

#include<bits/stdc++.h>
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

void in_order(Node *root)
{
    std::stack<Node*> s;
    Node *temp = new Node(-10000);
    Node *temp1 = new Node(-10000);
    temp = root ; 
    
    while(temp || !s.empty())
    {
        if(temp != NULL) 
        {
            s.push(temp);
            temp = temp->left;
        }
        if(temp == NULL && !s.empty())
        {
            temp1 = s.top();
            cout<<temp1->data<<" ";
            s.pop();
            temp = temp1->right;
        }
    }
}

int main()
{
    Node* root = new Node(1);
    
    root->left = new Node(6);
    root->right = new Node(9);
    root->left->left = new Node(2);
    root->left->right = new Node(0);
    root->right->left = new Node(5);
    root->right->right = new Node(7);
    
    in_order(root);
    
}
