#include <iostream>
using namespace std;

//DESTRUCTOR

/*  */

class A //क्लास define
{
   int Count = 0 ;
public:
    A() // CONSTRUCTOR DEFINE
    {
    Count++;
    cout<<"NUMBER OF OBJECT CREATED :"<<Count<<endl;
    }
    
    ~A() //DESTRUCTOR DEFINE
    {
    Count--;
    cout<<"NUMBER OF OBJECT DESTROYED : "<<Count<<endl;
    }
 };   //Class End

int main()
{
    A aa,bb,cc;  //3 object केले त्यामुळे 3दा Create होणार आणि 3 वेळेस 0 होणार
     
	return 0;
}

/*.OUTPUT:::     
        NUMBER OF OBJECT CREATED :1
        NUMBER OF OBJECT CREATED :1
        NUMBER OF OBJECT CREATED :1
        NUMBER OF OBJECT CREATED :1
        NUMBER OF OBJECT DESTROYED : 0
        NUMBER OF OBJECT DESTROYED : 0
        NUMBER OF OBJECT DESTROYED : 0
        NUMBER OF OBJECT DESTROYED : 0             */