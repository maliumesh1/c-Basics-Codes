#include<iostream>
using namespace std;
class demo
{
 int num1;
mutable int num2;
public:
demo()
{
num1=5;
num2=10;

}

void change() const
{
//num1++;//है काडल्यावर run होत नाही कारण define
// करतेवेळी mutable keyword वापरल नाही
num2+=5;//num2+5=num2

cout<<"num 1 = "<<num1<<endl;
cout<<"num 2 = "<<num2;
}
};

int main()
{
    demo d;
    d.change();
    return 0;
}