#include<iostream>
using namespace std;


//🎂 static data Function🎂

/* 1)😊static member function हा फक्त
     static data member access करू शकतात.😢
    
    2)☺️हा कोणत्याही object चा पार्ट असत नाही।☺️
    
    3)👌त्यामुळे या static function ला कॉल करण्यासाठी
      int main function मध्ये call करण्यासाठी
     💐className :: STATICFUNCTIONNAME💐
    
    4) 😊scope resolution oprator👌
    
    5)☺️static data Function program लिहिण्यासाठी
    static data member program मध्ये घ्यावा लागतो।😢
*/

class demo
{
    int x;        //Normal data member (variable)
    static int y; //static data member (variable)
    
    public:
     void getdata ()
     {
     cout<<"\nEnter the value of x :";
    cin>>x;
     y = y+1;
      //y हा static data member आहे त्याची value 0 असते।
     }
    void putdata()
       {
          cout<<"x="<<x<<"\ny="<<y<<endl;
        }
        
      static void abc()
      {
      cout<<"\n y"<<y;
      }
};

int demo :: y; // static data member असले की 
            //असे लिहिणे अनिवार्य आहे

 int main()
  { 
    demo aa,bb;
    aa.getdata();    // 1+1 =2 y ची value होईल
    bb.getdata();    // 1+1 =2 y ची value होईल
    aa.putdata();
    bb.putdata();
    cout<<"static data Function called :"<<endl;
    
    demo :: abc ;
    return 0;    
}

/*   Output
    Enter the value of x :57

    Enter the value of x :48
    x=57
    y=2
    x=48
    y=2
    static data Function called :
                                           */
    
    