#include<iostream>
using namespace std;
class shop
{
public:
int a;
  void get()
 {
 this->a=a;
 }

};
int main()
{ 
shop s;
int a=20;
s.get();
cout<<"Value of a is ="<<a;
    return 0;
}&