#include<iostream>
using namespace std;
//function pointer

  void one()
 {
 cout<<"one";
 }

int main()
{ 
void (*ptr)();//function pointer
ptr=one;
ptr();
    return 0;
}