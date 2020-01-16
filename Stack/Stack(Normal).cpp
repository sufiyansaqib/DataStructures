#include <iostream>
using namespace std;

class Stack{
    int *data;
    int capacity;
    int size;
    int nextIndex;
    
    public:
        Stack(int totalSize){
            data = new int[totalSize];
            nextIndex = 0;
            size = 0;
            capacity = totalSize;
        }
        
        int sizeOfStack(){
            return size;
        }
        
        bool isEmpty(){
            if(size == 0){
                return true;
            }
            else{
                return false;
            }
            //Could be written in one Statement:
                //return size == 0;
        }
        
        void push(int element){
            if(size == capacity){
                cout<<"FULL"<<endl;
                return;
            }
            data[nextIndex] = element;
            nextIndex++;
            size++;
        }
        
        int pop(){
            if(size == 0){
                cout<<"EMPTY"<<endl;
                return 0;
            }
            nextIndex--;
            size--;
            return data[nextIndex];
        }
        
        int top(){
            nextIndex--;
            return data[nextIndex];
        }
};

int main()
{
    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    
    cout<<s.pop();
    cout<<s.top();
    return 0;
}
