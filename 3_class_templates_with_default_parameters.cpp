#include<iostream>
using namespace std;

template <class T1=int, class T2=float, class T3=char>
class Anshu
{
    public:
        T1 a;
        T2 b;
        T3 c;

        Anshu(T1 x, T2 y, T3 z){
            a = x;
            b = y;
            c = z;
        }

        void display(){
            cout<<"The value of a is:- "<<a<<endl;
            cout<<"The value of b is:- "<<b<<endl;
            cout<<"The value of c is:- "<<c<<endl;
        }
};

int main()
{   
    Anshu <> a(4, 6.4, 'a');                                
    a.display();

    cout<<endl;

    Anshu <float, char, char> g(1.4, 'h', 'a');
    g.display();

    return 0;
}