#include <iostream>
using namespace std;

class Node{
    public:
            int data;
            Node *next;
            
            Node(int data){
                this->data = data;
                this->next = NULL;
            }
};

Node* insert(){
    // Insert till "-1" is encountered
    cout<<"ENTER NUMBERS , ENTER -1 TO STOP :"; 
    int data;
    cin>>data;
    
    Node *head= NULL;
    
    while(data != -1){
        Node *n = new Node(data);
        
        if(head == NULL){
            head = n;
        }
        else if(head != NULL){
            Node *temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = n;
        }
        cin>>data;
    }
    return head;
}

void print(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main()
{
    Node *head = NULL;
    head = insert();
    print(head);
    return 0;
}
