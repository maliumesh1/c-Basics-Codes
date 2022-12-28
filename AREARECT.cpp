#include <iostream>
using namespace std;
class A
{
public:
int a=50,b=555;

    void func()
    {
        cout<<"Area of Rectangle:"<<a*b<<endl;
    }
};
class B
{
public:
    void func()
    {
        cout<<" I am class B"<<endl;
    }
};

class C : public A, public B
{
public:
    void anyfunc()
    {
        A::func();
    }

} obj;

int main()
{

    obj.anyfunc();


    return 0;
}