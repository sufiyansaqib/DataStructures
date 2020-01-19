#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v; //static
    vector<int> *vp = new vector<int>(); // dynamic_cast
    
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    
    cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;
    v[1] = 100;
    cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;
    
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<" "<<v[3]<<" "<<v[4]<<" "<<v[5]<<endl;
    
    cout<<"SIZE -> "<<v.size()<<endl;
    //cout<<v.at(10)<<endl; //Error because this is out of range
    
    for(int i =0;i<v.size();i++){
        //cout<<v[i]<<" "; //Normal way
        cout<<v.at(i)<<" ";
    }
    
    cout<<endl;
    
    v.pop_back(); //Removes the last element
    for(int i =0;i<v.size();i++){
        //cout<<v[i]<<" "; //Normal way
        cout<<v.at(i)<<" ";
    }
    
    cout<<endl;
    
    cout<<"SIZE -> "<<v.size()<<endl;
    
    //capacity
    cout<<"CAPACITY -> "<<v.capacity(); // Doubles like dynamic array
    return 0;
}
