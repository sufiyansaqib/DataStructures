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
    cout<<"ENTER NUMBERS , ENTER -1 TO STOP :";
    int data;
    cin>>data;
    
    Node *head = NULL;
    Node *tail = NULL;
    
    while(data != -1){
        Node *n = new Node(data);
        
        if(head == NULL){
            head = n;
            tail = n;
            
        }
        else if(head != NULL){
            tail->next = n;
            tail = tail->next;
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
