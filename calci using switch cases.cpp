#include<iostream>
using namespace std;
//switch case statement
int main()
{
   int ch,a,b; // menu.not defined logic
    cout<<".......Menu......"<<endl;
    cout<<"1.Addition"<<endl;
    cout<<"2.Substraction"<<endl;
    cout<<"3.multiplication"<<endl;
    cout<<"4.Division"<<endl;
    cout<<"5.Exit"<<endl;
    
    cout<<"select choice(1 to 4)=";
    cin>>ch;
    
    cout << "ENTER VALUE OF A :" <<endl;
    cin >> a;
    cout << "ENTER VALUE OF B :" <<endl;
    cin >> b;
    
    
    switch(ch)
    {
    
    case 1:
     cout<<"Addition="<<a+b<<endl;
      break;
    
    
    case 2:
    cout<<"substraction="<<a-b<<endl;
      break;
    
    case 3:
    cout<<"Multiplication="<<a*b<<endl;
      break;
    
    case 4:
    cout<<"Division="<<a/b<<endl;
      break;
    
     default:
        cout<<"Please select valid choice="<<endl;
 
    }

 return 0;
        
} 
    
    
    
    
    
    