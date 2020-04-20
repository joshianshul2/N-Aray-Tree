#include<iostream>
using namespace std;
#include"genricTreesIntro.cpp"


void postOrder(TreeNode<int>* root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output in specified format.
     */
    if(root==NULL)
        return;
      // for preorder traverseral -->cout<<root->data<<" ";
    for(int i=0;i<root->children.size();i++)
    {
    postOrder(root->children[i]);
    }
    cout<<root->data<<" ";

}
int main()
{
    TreeNode<int>* root=LevelWiseInput();
    printLevelWise(root);
    cout<<"PostOrder in a Tree : "<<endl;
    postOrder(root);
}


