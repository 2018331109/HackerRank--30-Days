#include<bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    Node* left;
    Node* right;
    Node(int val):data(val), left(nullptr), right(nullptr) {}
};

queue<Node*>q;

//levelorder traversal of bst using queue

void level(Node* root)
{
    while(!q.empty())
    {
        int sz=q.size();
        for(int i=0; i<sz; i++)
        {
            Node* cur=q.front();
            q.pop();
            cout<<cur->data<<" ";
            if(cur->left != nullptr)
            {
                q.push(cur->left);
            }
            if(cur->right != nullptr)
            {
                q.push(cur->right);
            }
        }
    }
}

Node* insert(Node* root, int data)
{
    if(root == nullptr)
    {
        return new Node(data);
    }

    if(data<=root->data)
    {
        root->left=insert(root->left, data);
    }
    else
    {
        root->right=insert(root->right, data);
    }
    return root;

}

signed main()
{
    int n;
    cin>>n;
    Node *root = nullptr;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        root=insert(root, x);
    }
    q.push(root);
    level(root);
}
