#include <iostream>
using namespace std;

template<typename T>
class Stack{
    T *data;
    int capacity;
    int size;
    int nextIndex;
    
    public:
        Stack(int totalSize){
            data = new T[totalSize];
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
        
        void push(T element){
            if(size == capacity){
                cout<<"FULL"<<endl;
                return;
            }
            data[nextIndex] = element;
            nextIndex++;
            size++;
        }
        
        T pop(){
            if(size == 0){
                cout<<"EMPTY"<<endl;
                return 0;
            }
            nextIndex--;
            size--;
            return data[nextIndex];
        }
        
        T top(){
            nextIndex--;
            return data[nextIndex];
        }
};

int main()
{
    Stack<int> s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    
    cout<<s.pop();
    cout<<s.top();
    return 0;
}
