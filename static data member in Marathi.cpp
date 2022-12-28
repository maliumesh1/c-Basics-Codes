#include<iostream>
using namespace std;


//🎂 static data member 🎂। {members variables असतात}

/* 1)☺️static data member हा 0 ने intialized होतो हा
   जेव्हा आपण object create केले की 0 ने intialized होतो☺️

   2) 😊0 शिवाय दुसरं intialized होत नाही😊

   3)data member ला static data member करण्यासाठी 
    ☺️ "static" 😊 keyword 💐लावावा लागतो

   4)👌याची फक्त 1 कॉपी बनते,परंतु प्रत्येकाला SHERE करते👌

   5) 👍याची VISABILITY पूर्ण PROGRAM भर असते 👍
    
*/

class demo
{
    int x,y;
    static int z;
    
    public:
     void getdata (int a,int b)
     {
     x=a;
     y=b;
     z=z+1;
    }
    ।  void putdata()
        {
          cout<<"x="<<x<<"\ny="<<y<<"\nz="<<z<<endl;
          }
};

int demo::z; // static data member
            //असे लिहिणे अनिवार्य आहे

 int main()
  { 
    demo aa,bb;
    aa.getdata (5,10);
    bb.getdata(6,77);
    aa.putdata();
    bb.putdata();
    
    return 0;    
}

/*   Output
    x=5y=77
    y=10
    z=2
    x=6
       */
    
