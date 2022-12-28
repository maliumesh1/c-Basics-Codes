#include <iostream>
using namespace std;
class base 
{
  int a;
public:
  int b;
 void set_ab();
 int get_a();
void show_a();
};
class derived:public base
{
int c;
public: 
void mul();
void display();
};
void base :: set_ab()
{
   a=5;
   b=10;
}
int base::get_a()
{
    return a;
}
void base::show_a()
{
   cout << "a = " <<get_a()<<"\n";
}
void derived :: mul()
{
    c = b * get_a();
}
void derived :: display()
{
   cout << "a = "<< get_a() << "\n";
   cout << "b = "<< b << "\n";
   cout << "c = "<< c << "\n\n";
}
int main()
{
  derived d;
  d.set_ab();
  d.mul();
  d.show_a();
  d.display();

  d.b=20;
  d.mul();
  d.display();
  return 0;
}