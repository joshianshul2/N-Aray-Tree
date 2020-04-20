#include<iostream>
#include<vector>
using namespace std;
#include"genricTreesIntro.cpp"


TreeNode<int>* insert()
{
    int rootdata;
    cout<<"Enter a Root value "<<endl;
    cin>>rootdata;
    TreeNode<int> *root=new TreeNode<int>(rootdata);
    int n;
    cout<<"Enter no of Children Of "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        TreeNode<int>* child=insert();
        root->children.push_back(child);
    }
    return root;
}

void Print(TreeNode<int>*root)
{

    cout<<root->data<<":";
    for(int i=0;i<root->children.size();i++)
    {
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++)
    {
        Print(root->children[i]);
    }

}


int main()
{
    TreeNode<int>* root=insert();
    cout<<"Required Result Is:"<<endl;
    Print(root);
}
