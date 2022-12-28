#include<iostream>
using namespace std;
//switch case statement

   struct employee
    {
      int id;
      char favchar;// favorite character
      float salary;
     };
    
int main()
{
    struct employee umesh;
    umesh.id=1;
    umesh.favchar='a';
    umesh.salary=12889900;
    cout<<"the value is :"<<umesh.id<<endl;
    cout<<"the value is :"<<umesh.favchar<<endl;
   cout<<"the value is :"<<umesh.salary<<endl;
   
    

 return 0;
        
} 
    
    
    
    
    
    