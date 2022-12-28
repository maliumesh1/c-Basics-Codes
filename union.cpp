#include<iostream>
using namespace std;
/*. union मधे आपन int,char,float यातील कोणतेही एक वापरु शकता
कारण मेमोरी एका data type ला दिली जाते*/
   union money
    {
      int rice;
      char car;
      float pounds;
     };
    
int main()
{
    union money m1;
    m1.rice=30;
    cout<<m1.rice; 
    
    //m1.car='j'; कमेंट काढलीकी बघा यातील कोणत्याही एकचि   
   //cout<<m1.car; वैल्यू देईल दूसरी garbage value देईल

 return 0;
        
} 
    
    
    
    
    
    