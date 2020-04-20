#include<iostream>
#include"genricTreesIntro.cpp"
using namespace std;


int Height(TreeNode<int>* root)
{
    int ans=1,max=0;
    if(root==NULL)
        return 0;
    for(int i=0;i<root->children.size();i++)
    {
    
        ans=Height(root->children[i]);
        if(max<ans)
        {
            max=ans;
        }
    }
    return max+1;
}

int main()
{
    TreeNode<int>* root=LevelWiseInput();
    printLevelWise(root);
    int a=Height(root);
    cout<<"Height of a Tree : "<<a<<endl;
}

