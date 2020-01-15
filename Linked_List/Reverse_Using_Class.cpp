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

class Pair{
    public:
            Node *head;
            Node *tail;
};

Pair rev(Node *head){
    if(head == NULL || head->next == NULL){
        Pair ans;
        ans.head = head;
        ans.tail = head;
        return ans;
    }
    
    Pair small_ans = rev(head->next);
    
    small_ans.tail->next = head;
    head->next = NULL;
    
    Pair ans;
    ans.head = small_ans.head;
    ans.tail = head;
    return ans;
}

Node* reverse(Node *head){
    return rev(head).head;
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
