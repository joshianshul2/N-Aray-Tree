#include<iostream>
using namespace std;
#include"genricTreesIntro.cpp"


void preOrder(TreeNode<int>* root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output in specified format.
     */
    if(root==NULL)
        return;
      // for preorder traverseral -->cout<<root->data<<" ";
    cout<<root->data<<" ";
    for(int i=0;i<root->children.size();i++)
    {
    preOrder(root->children[i]);
    }
    

}
int main()
{
    TreeNode<int>* root=LevelWiseInput();
    printLevelWise(root);
    cout<<"PreOrder in a Tree : "<<endl;
    preOrder(root);
}


