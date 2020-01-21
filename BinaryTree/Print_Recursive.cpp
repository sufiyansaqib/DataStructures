#include <iostream>
using namespace std;

template<typename T>
class BinaryTree{
    public:
            T data;
            BinaryTree<T> *left;
            BinaryTree<T> *right;
            
            BinaryTree(int data){
                this->data = data;
                left = NULL;
                right = NULL;
            }
            
            ~BinaryTree(){
                delete left;
                delete right;
            }
};

void printTree(BinaryTree<int> *root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<":";
    if(root->left != NULL){
        cout<<" L->"<<root->left->data;
    }
    if(root->right != NULL){
        cout<<" R->"<<root->right->data;
    }
    cout<<endl;
    printTree(root->left);
    printTree(root->right);
}

int main()
{
    BinaryTree<int> *root = new BinaryTree<int>(1);
    BinaryTree<int> *node1 = new BinaryTree<int>(2);
    BinaryTree<int> *node2 = new BinaryTree<int>(3);
    
    root->left = node1;
    root->right = node2;
    
    printTree(root);
    delete(root);
    return 0;
}
