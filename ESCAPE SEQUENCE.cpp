#include<iostream>
#include<iomanip>
using namespace std;
int main()
{    //ESCAPE SEQUENCE


    cout<<"mali\numesh"<<endl;
    /* OUTPUT.  mali
                umesh
     नवीन ओळीत टाकतो  \n      */
            
            
      cout<<"mali\tumesh"<<endl;
    /* OUTPUT.  mali    umesh
    नावाच्या मध्ये Tab देतो  \t    */ 
    
     cout<<"mali\bumesh"<<endl;
    /* OUTPUT.  malumesh
    backspace म्हणजेच अगोदरच अक्षर/space delet करतो \b */ 

    cout<<"mali\fumesh"<<endl;
    /* OUTPUT.  mali
                  umesh
    formatted  \f   */
    
    
    cout<<"mali\\umesh"<<endl;
    /* OUTPUT.  mali\umesh
    backslash देतो  \\    */ 
    
    
    cout<<"mali\vumesh"<<endl;
    /* OUTPUT.  mali
                 umesh
    vertical tab देतो  \v    */ 
    
    cout<<"mali\rumesh"<<endl;
    /* OUTPUT.   umesh
               umesh
    \नंतरचे नाव पुन्हा लिहितो देतो  \r    */ 
    
    
    cout<<"mali\0umesh"<<endl;
    /* OUTPUT.   mali
               
    \नंतरचे नाव delete करतो  \0  null character  */ 
    
    
    
}


    