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

int mid(Node *head){
    Node *slow = head;
    Node *fast = head;
    
    while(fast != NULL &&fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    
    return slow->data;
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
    Node *tail = &n5;*/
    
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
    
    int m = mid(head);
    cout<<m;
    return 0;
}
