#include <iostream>
using namespace std;

//COPY CONSTRUCTOR

/* COPY CONSTRUCTOR  वापरण्यासाठी एक default constructor वापरावयाचा*/

class A //क्लास define
{
int a;
public:
    A() //default constructor 
    {
    a=10;
    }
    
    A (A &aa)//copy constructor//&ampercent sign वापरायचं      
    {
    a=aa.a;
    }
    
    void putdata()
    {
    cout<<"Value of a="<<a<<endl;
    }
 };   //class end

int main()
{
    A aa;     //1st object    
    aa.putdata();            // op. Value of a=10
    
    
    A bb=aa;   /*या दोन प्रकारे आपण कॉपी  */
    //A bb(aa); constructor ला कॉल करू शकता
    
    
    bb.putdata();             //op  Value of a=10
	return 0;
}

/*.OUTPUT:::      Value of a=10
                  Value of a=10               */