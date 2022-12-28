#include<iostream>
using namespace std;

int main()
{int a,b;

    cout << "enter value a and b\n";
    cin>>a;
    cin>>b;
    int x=a-b;
    try
    {
    if(x!=0)
     {
      cout << "a/x\n"<<a/x<<"\n";
     }
      else
      {
       throw(x);
      }
    }
    catch(int i)
    {
    cout << "expression cought:divide ";
    }
    cout << "end";
    
    return 0;
}