#include<iostream>
#include<vector>
#include"genricTreesIntro.cpp"
#include<queue>
using namespace std;



TreeNode<int>* LevelWiseInput()
{
    queue<TreeNode<int>*> pendingnodes;
    int rootdata;
    cout<<"Enter The root data "<<endl;
    cin>>rootdata;
    TreeNode<int>* root=new TreeNode<int>(rootdata);
    pendingnodes.push(root);
    while(pendingnodes.size()!=0)
    {
        TreeNode<int>* front=pendingnodes.front();
        pendingnodes.pop();
        int numchild;
        cout<<"Enter no of children "<<front->data<<endl;
        cin>>numchild;
        for(int i=0;i<numchild;i++)
        {
            int childdata;
            cout<<i<<" th Child Of "<<front->data<<endl;
            cin>>childdata;
            TreeNode<int>* child=new TreeNode<int>(childdata);
            front->children.push_back(child);
            pendingnodes.push(child);
            
          }
        }
    return root;
}

void printLevelWise(TreeNode<int>* root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output as specified in the question.
     */
    queue<TreeNode<int>*> pendingNodes;
   pendingNodes.push(root);
    while(pendingNodes.size()!=0)
    {
        TreeNode<int>*front=pendingNodes.front();
        cout<<front->data<<":";
       pendingNodes.pop();
         int n=front->children.size();
        for(int i=0;i<front->children.size();i++)
        {
            if(i==n-1){
                cout<<front->children[i]->data<<".";
            }
            // if condition is use to put . at the End.
            else
             cout<<front->children[i]->data<<",";
            pendingNodes.push(front->children[i]);
        }
        cout<<endl;
        }
}


int main()
{
    TreeNode<int>* root=LevelWiseInput();
    cout<<"Printing LevelWise "<<endl;
    printLevelWise(root);
}
