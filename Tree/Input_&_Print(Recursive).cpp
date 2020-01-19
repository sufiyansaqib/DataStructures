#include <iostream>
#include<vector>

using namespace std;

template<typename T>
class TreeNode{
    public:
            T data;
            vector<TreeNode<T> *> children;
            
            TreeNode(T data){
                this->data = data;
            }
    
};

void printTreeNode(TreeNode<int> *root){
    cout<<root->data<<" : ";
    for(int i=0; i<root->children.size();i++){
        cout<<root->children[i]->data<<" ";
    }
    cout<<endl;
    for(int i=0; i<root->children.size(); i++){
        printTreeNode(root->children[i]);
    }
}

TreeNode<int>* takeInput(){
    int rootData;
    cout<<"Enter the data: "<< endl;
    cin>>rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);
    
    cout<<"Enter the no. of children for: "<<root->data<<endl;
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        TreeNode<int> *child = takeInput();
        root->children.push_back(child);
    }
    return root;
}

int main(){
    TreeNode<int> *root = new TreeNode<int>(10);
    TreeNode<int> *n1 = new TreeNode<int>(20);
    TreeNode<int> *n2 = new TreeNode<int>(30);
    
    root->children.push_back(n1);
    root->children.push_back(n2);
    
    printTreeNode(root);
    
    root = takeInput();
    printTreeNode(root);
    return 0;
}
