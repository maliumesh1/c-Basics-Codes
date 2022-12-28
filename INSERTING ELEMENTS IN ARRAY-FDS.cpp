

#include<iostream>
using namespace std;

//INSERTING ELEMENTS IN ARRAY
int main()
{    //i=index,n=number ऑफ elements
     int arr[100], position,i,n, value;
    cout<<"\n How many elements in Array:";
    cin>>n; //किती element आहेत
    cout<<"Enter the Elements\n:";
    for (i=0;i<n;i++)
       cin>>arr[i];  //elements कोण कोणते
    cout<<"Enter the location to insert Elements\n:";
    cin>>position;  //कोणत्या position ला
    cout<<"\n value to insert in Array:";
    cin>>value;  //कोणती value टाकायची आहे
    
    for (i=n-1;i>=position-1;i--)
    arr[i+1]=arr[i]; //position च्या आधीचे space कमी करणे
    arr[position-1]=value; //space देण्यासाठी
    
    
    
    printf("Resultant array is\n");//array print 
                                    //करण्यासाठी
    for (i=0;i<=n;i++)
     cout<<"\n"<<arr[i]; 
     return 0;
 }

/*----------------------------------------------------------
-----------------💐OUTPUT💐------------------------------------------------
                      
            
    ☺️How many elements in Array:2
    Enter the Elements:3
                       8
            
    Enter the location to insert Elements :1
    value to insert in Array:78
    Resultant array is

     78
      3
      8 👍
            
            
            
            
                                                                            */
            