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
    return;
}

int length(Node *head){
    //Recursive Way
        /*int size = 0;
        if(head == NULL){
            return 0;
        }
        size++;
        int so = length(head->next);
        return size+so;*/
    //Iterative Way
        int size = 0;
        Node *temp = head;
        while(temp != NULL){
            temp = temp->next;
            ++size;
        }
        return size;
    
}

int main()
{
    /*Node n1(1);
    Node n2(2);
    Node n3(3);
    Node n4(5);
    Node n5(6);
    
    Node *head = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    Node *tail = &n5;
    
    print(head);*/
    
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

    int l = length(head);
    cout<<endl<<l;

    return 0;
}
