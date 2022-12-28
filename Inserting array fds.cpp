#include<iostream>
using namespace std;

int main()
{
    int array[10],position,i,n,value;
    cout<<"\n How many elements are there in array:";
    cin>>n;
    cout<<"Enter the elements\n:";
    for (i=0;i<n;i++)
         cin>>array[i];
        
    cout<<"\n Enter the location where you wish to insert an element:";
    cin>>value;
    for (i=n-1;i>=position-1;i--)
         array[i+1]=array[i];
    array[position-1]=value;
    printf("Resultant array is\n");
    for(i=0;i<=n;i++)
       cout<<"\n"<<array[i];
    return 0;
}