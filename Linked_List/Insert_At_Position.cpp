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

Node* insertAtN(Node *head, int data, int pos){
    //************************Iterative way***************************//
        Node *n = new Node(data);
        if(pos == 0){
            n->next = head;
            head = n;
            return head;
        }
        Node *temp = head;
        for(int i =0;i<pos-1;i++){
            if(temp == NULL){
                cout<<"CANNOT INSERT - YOU ARE TRYING TO INSERT AN ELEMENT OUTSIDE THE RANGE OF THE LIST: ";
                return head;
            }
            temp = temp->next;
        }
        n->next = temp->next;
        temp->next = n;
        return head;
    
    //**************************Recursive way*************************//
        /*if(head == NULL){
            return head;
        }
        else if(head == NULL && pos == 0){
            Node *n = new Node(data);
            head = n;
            return head;
        }
        if(pos == 0){
            Node *n = new Node(data);
            n->next = head;
            head = n;
            return head;
        }
        else{
            head->next = insertAtN(head->next,data,pos-1);
        }
        return head;*/
}

void print(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    Node *head = NULL;
    head = insert();
    print(head);
    
    head = insertAtN(head,6,0);
    head = insertAtN(head,9,1);
    head = insertAtN(head,7,100);
    
    print(head);
    return 0;
}
