#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
   int a=5,b=2,c=5,d=3,r,r1,r2,r3;

   //logical not "&&"
   r=((a>b)&&(c>d));
   cout<<r<<endl;//output=1=true
   //दोन्ही true असतील तरच true""&&""

    //logical or "||"
    r1=((a>b)||(c>d));
    cout<<r1<<endl;//output=1=true
     //दोन्ही false असतील तरच false""||""
    
    r2=((a<b)||(c<d));
    cout<<r2<<endl;//output=0=false
     //दोन्ही false असतील तरच false""||""
    
    //logical not "!"
    r3=!(a<b);
    cout<<r3<<endl;//output=1=true
     //true असेल तर false
    //false असेल तर true
    
}


