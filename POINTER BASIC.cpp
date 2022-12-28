#include<iostream>
using namespace std;

int main()
{
 /*POINTER = data types which holds
            address of other data type.  */
 int a=3;
 int* b= &a;

//👍 & Operator = याच्या सोबतीच्या चा address RAM मधील
cout<<"the address of a is:"<<&a<<endl;
cout<<"the address of b=a adds is:"<<b<<endl;
//💐 Output = 0x7fc67c7af8 दोघांची सारखीच

//👍 * OPERATOR = च्या सोबतीच्या घटकाची VALUE
 cout<<"the address of *b is:"<<*b<<endl;
    //Output = 3
    
    return 0;
}