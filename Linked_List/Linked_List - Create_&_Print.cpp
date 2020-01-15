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

int main()
{
    //Static way of creating a linked List
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

    //Dynamic way of creating a Linked List
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

    return 0;
}
