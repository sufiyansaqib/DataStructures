#include <iostream>
using namespace std;

template<typename T, typename V>
class Pair{
    T x;
    V y;
    
    public:
            void setx(T data){
                this->x = data;
            }
            T getx(){
                return this->x;
            }
            
            void sety(V data){
                this->y = data;
            }
            V gety(){
                return this->y;
            }
};

int main()
{
    Pair<int, char> p;
    p.setx(10);
    p.sety('a');
    cout<<p.getx()<<" "<<p.gety()<<endl;
    
    Pair<Pair<int, int>, int> p1;
    p1.sety(11);
    Pair<int,int> p2;
    p2.setx(1);
    p2.sety(2);
    p1.setx(p2);
    
    cout<<p1.getx().getx()<<" "<<p1.getx().gety()<<" "<<p1.gety()<<endl;
    return 0;
}
