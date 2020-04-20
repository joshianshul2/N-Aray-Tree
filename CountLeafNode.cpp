#include<iostream>
using namespace std;
#include"genricTreesIntro.cpp"

// leaf is no children


int CountLeaf(TreeNode<int>* root)
{
    int count=0;
    if(root==NULL)
        return 0;
    if(root->children.size()==0)
    {
        return 1;
    }
    for(int i=0;i<root->children.size();i++)
    {
     count+=CountLeaf(root->children[i]);
}
    return count;
}


int main()
{
    TreeNode<int>* root=LevelWiseInput();
    printLevelWise(root);
    cout<<"No Of Leaf in a Tree : "<<endl;
    cout<<CountLeaf(root)<<endl;
    
}


