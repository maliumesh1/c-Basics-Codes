#include<iostream>
using namespace std;

int main()

{
   int no,sum=0,d;
   cout<<"Enter a number:";
   cin>>no;
  while(no!=0)

  {
    d=no%10;
    sum = sum + d;
    no=no/10;
  }
    cout<<"sum of Digits="<<sum;
    
    return 0;
}

    
 