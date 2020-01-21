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

BinaryTree<int> * takeInput(){
    cout<<"ENTER THE DATA"<<endl;
    int data;
    cin>>data;
    
    if(data == -1){
        return NULL;
    }
    
    BinaryTree<int> *root = new BinaryTree<int>(data);
    BinaryTree<int> *leftChild = takeInput();
    BinaryTree<int> *rightChild = takeInput();
    
    root->left = leftChild;
    root->right = rightChild;
    
    return root;
    
}

int main()
{
    BinaryTree<int> *root = takeInput();
    printTree(root);
    return 0;
}
