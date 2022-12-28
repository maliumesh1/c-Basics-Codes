using namespace std;
#include<iostream>
#include<stdio.h>
#include<conio.h>
#define SIZE 5


int stack[SIZE], choice,top,ele,i;

int full();
int empty();
void push();
void pop();
void display();

int main()
{
top=-1; //
cout<<"\n\tSTACK OPERATION USING ARRAY :";
cout<<"\n\t............................:";
cout<<"\n\t1.PUSH\n\t2.POP\n\t3.DISPLAY\n\t4.EXIT";
do
{
cout<<"\nEnter your Choice :";
cin>>choice;
switch(choice)
{

    case1:
     {
        push();
        break;
      }
    case2:
      {
            pop();
            break;
       }
    case3:
       {
            display();
            break;
        }
    case4:
        {
            cout<<"\n\t Exit Point";
            break;
        }

    default:
        {
        cout<<"\n\t please enter valid choice";
        }
    getch();
    }
   }
while(choice!=4);
}

int full()
{
    if (top==SIZE-1)
     return(1);
    else
     return(0);
}
  void push()
 {
   if (full()==1)
     {    
     cout << "\n\tStack is overflow";
      }
    else
    {
     cout << "Enter an Element to add in Stack";
     cin>>ele;
    top++;
     stack[top]=ele;
    }
  }

  int empty()
  {
    if(top==-1)
     return(1);
    else
     return(0);
   }

 void pop()
  {
    if (empty()==1)
     {    
     cout << "\n\tStack is underflow";
      }
    else
    {
     cout << "Element popped: "<<stack[top];
     top--;
    }
  }

 void display()
  {
    if (empty()==1)
      {    
      cout << "\n\tStack is underflow";
       }
    else
    {
     cout << "\n stack element:";
 for(i=top;i>=0;i--)
       {
        cout<<" "<<stack[i];
       }
    }
  }
    