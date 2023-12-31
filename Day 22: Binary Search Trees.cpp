#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node* left;
    Node* right;
    Node(int x):val(x), left(nullptr), right(nullptr) {}
};

int height(Node* root)
{
    if(root==nullptr)
    {
        return 0;
    }
    int left=height(root->left);
    int right=height(root->right);
    return max(left, right)+1;
}

void traverse(Node* root)
{
    if(root == nullptr)
    {
        return;
    }
    cout<<root->val<<" ";
    if(root->left != nullptr)
    {
        traverse(root->left);
    }
    if(root->right != nullptr)
    {
        traverse(root->right);
    }
}

Node* add(Node* root, int x)
{
    if(root==nullptr)
    {
        return new Node(x);
    }
    if(x<=root->val)
    {
        root->left=add(root->left, x);
    }
    else
    {
        root->right=add(root->right, x);
    }

    return root;
}

signed main()
{
    int n;
    cin>>n;
    Node* root=nullptr;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        root=add(root, x);
    }
    //traverse(root);
    int ans=height(root);

    cout<<ans-1<<endl;
}
