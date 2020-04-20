#include<iostream>
#include"genricTreesIntro.cpp"
using namespace std;


int count(TreeNode<int>* root)
{
    int ans=1;
    if(root==NULL)
        return 0;
    for(int i=0;i<root->children.size();i++)
    {
    
        ans=ans+count(root->children[i]);

    }
    return ans;
}

int main()
{
    TreeNode<int>* root=LevelWiseInput();
    printLevelWise(root);
    int a=count(root);
    cout<<"Count of Node : "<<a<<endl;
}
