#include<iostream>
using namespace std;
//USE OF NEW AND DELETE OPERATOR

int main()
{
int *arr;
int size;

    cout << "Enter size of array:  ";
    cin>>size;
    
   cout<<"Create an array size of Size: "<<size<<"..";
   arr=new int[size];
  cout<<"\nDyanamic data allocation successful.";
  delete arr;

     return 0;
}