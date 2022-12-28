#include <iostream>
using namespace std;
class A
{
public:
    void func()
    {
        cout<<" I am class A"<<endl;
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
        B::func();
    }

} obj;

int main()
{

    obj.anyfunc();


    return 0;
}