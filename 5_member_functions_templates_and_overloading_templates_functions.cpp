#include<iostream>
using namespace std;

template <class T>
class Anshu
{
    public:
        T data;

        Anshu(T a){
            data = a;
        }

        void display();
};

template <class T>
void Anshu<T>:: display(){
    cout<<data<<endl;
}

void func(int a){
    cout<<"I am first func() "<<a<<endl;
}

template <class T>
void func(T a){
    cout<<"This is templatised func() "<<a<<endl;
}

template <class T>
void func1(T a){
    cout<<"This is templatised func() "<<a<<endl;
}

int main()
{   
    Anshu <int> a(7);

    cout<<a.data<<endl;
    a.display();

    func(1); // Exact match takes highest priority
    func1(2);

    return 0;
}