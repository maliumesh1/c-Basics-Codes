#include <iostream>
using namespace std;

//PARAMETRIZED CONSTRUCTOR
//parameter द्यावे लागेल built in datatypes ही द्यावे लागतील जसे int, float, double,short

class complex
{
  
    int a,b;
  public:
  complex(int,int); // PARAMETRIZED CONSTRUCTOR DEFINE.   
                   //येथे ही parameter द्यावे लागेल built in datatypes ही द्यावे लागतील जसे int, float, double,short
            
            
    void printnumber()
    {
    cout<<"YOUR NUMBER IS:"<<a<<'+'<<b<<"i"<<endl;
    }
};            //END OF THE CLASS

complex::complex(int x,int y) //येथे ही parameter द्यावे लागेल
{
     a=x; 
     b=y;
}

int main()
{
    //implicit call
	complex c(4,6); //येथे ही parameter द्यावे लागेल
  c.printnumber();



  //EXPLICIT CALL 
complex d(6,9);
d.printnumber();

	return 0;
}

/*.OUTPUT:::      YOUR NUMBER IS:4+6i
                  YOUR NUMBER IS:6+9i.               */