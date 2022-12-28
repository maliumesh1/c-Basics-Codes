#include<iostream>
//Static Member Variable
using namespace std;

class Test
{

private :
    int a,b;
public:
    static int count;
    Test()
    {
        a=10;
        b=10;
        count++;
    }
    static int getCount()  //Static Member function returns only static variables
    {
        return count;
    }
};
int Test::count=0;
int main()
{
    Test t1;
    cout<<"T1 :"<<Test::getCount();
}