#include<iostream>
using namespace std;
class shop
{
public:
int a=20;
  void getname()
 {
 cout<<"Value of a is ="<<a;
 }
};
int main()
{ 
shop *m= new shop;
(*m).getname();
 
    return 0;
}