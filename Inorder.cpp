#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};

struct node* newnode(int d)
{
    struct node* nod=new node();
    nod->data=d;
    nod->left=NULL;
    nod->right=NULL;
    return nod;
}

void inorder1(struct node* head)
{
    if(head==NULL)
    {
        return;
    }
    inorder(head->left);
    cout<<head->data<<" ";
    inorder(head->right);
}


void inorder2(struct node* temp)
{
    stack<node*>s;
    node* curr=temp;
    while(curr!=NULL || s.empty()!=true)
    {
        while (curr!=NULL)
        {
            s.push(curr);
            curr=curr->left;
        }
        curr=s.top();
        s.pop();
        cout<<curr->data<<" ";
        curr=curr->right;
    }
}

int main()
{
    system("cls");
    node* root=newnode(1);
    root->right=newnode(7);
    root->left=newnode(6);
    root->right->right=newnode(9);
    cout<<root->right->data<<endl;
    inorder2(root);
    return 0;

}