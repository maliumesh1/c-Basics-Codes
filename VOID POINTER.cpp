#include<iostream>
using namespace std; //👌👌 VOID POINTER 👌👌

int main()
{
  void *ptr;
float p=2.9;
ptr=&p;
cout<<"The value of pointer is="<<ptr<<endl;//Op 0x7fd348e92c
cout<<"(( & p))="<<&p;// OP - 0x7fd348e92c
    return 0;
}