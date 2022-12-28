#include<iostream>
using namespace std;

int main()
{
int num[]={56,75,22,18,90};
int *ptr;
int i;

    cout << "values in array\n";
    for(i=0;i<5;i++)
      cout<<"num[i]"<<"\n";
    
    ptr=num;
    cout << "values of ptr\n"<<*ptr;
    cout<<"\n";
    
    ptr++;
    cout << "values of ptr++\n"<<*ptr;
    cout<<"\n";
    
    ptr--;
    cout << "values of ptr--\n"<<*ptr;
    cout<<"\n";
    
    ptr=ptr+2;
    cout << "values of ptr+2\n"<<*ptr;
    cout<<"\n";
    
    ptr=ptr-1;
    cout << "values of ptr-1\n"<<*ptr;
    cout<<"\n";
    
    ptr+=3;
    cout << "values of ptr+=3 \n"<<*ptr;
    cout<<"\n";
    
    ptr-=2;
    cout << "values of ptr-=2\n"<<*ptr;
    cout<<"\n";
    
    return 0;
}