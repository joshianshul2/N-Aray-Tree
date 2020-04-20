#include<iostream>
using namespace std;
#include"genricTreesIntro.cpp"

void DepthAtLevelk(TreeNode<int>* root,int k)
{
    if(root==NULL)
        return ;
    if(k==0)
        cout<<root->data<<endl;
        for(int i=0;i<root->children.size();i++)
        {
        DepthAtLevelk(root->children[i],k-1);
        }
}

int main()
{
    TreeNode<int>* root=LevelWiseInput();
    printLevelWise(root);
    int k;
    cout<<"Enter a Depth of Tree "<<endl;
    cin>>k;
    cout<<"Dephtf of a Tree : "<<endl;
    DepthAtLevelk(root, k);
    
}


