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

void print(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

Node* reverse(Node *head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    
    Node *final_head = reverse(head->next);
    Node *temp = final_head;
    
    Node *tail = head->next;
    tail->next = head;
    head->next = NULL;
    return final_head;
    
}

int main()
{
    Node *n1 = new Node(1);
    Node *n2 = new Node(2);
    Node *n3 = new Node(3);
    Node *n4 = new Node(4);
    Node *n5 = new Node(5);
    
    Node *head = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    print(head);
    
    head = reverse(head);
    print(head);
    return 0;
}
