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

Node* deleteNode(Node *head, int pos){
    //***************************Iterative method*************************//
        Node *temp = head;
        if(pos == 0){
            head = temp->next;
            delete temp;
            return head;
        }

        for(int i=0;i<pos-1;i++){
            if(temp == NULL){
                cout<<"CANNOT DELETE - YOU ARE TRYING TO DELETE AN ELEMENT OUTSIDE THE RANGE OF THE LIST: ";
                return head;
            }
            temp = temp->next;
        }

        Node *NodetoDel = temp->next;
        temp->next = NodetoDel->next;
        delete NodetoDel;

        return head;
        
        //***************************Recursive method*************************//
            /*Node *temp = head;
            if(head == NULL){
                return head;
            }

            if(pos == 0){
                head = temp->next;
                delete temp;
                return head;
            }

            head->next = deleteNode(head->next,pos-1);
            return head;*/
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
    
    head = deleteNode(head, 0);
    print(head);
    head = deleteNode(head, 3);
    print(head);
    head = deleteNode(head, 7);
    print(head);
    
    return 0;
}
