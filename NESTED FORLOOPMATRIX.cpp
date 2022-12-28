#include<iostream>
using namespace std;
  
         // 💐📚📚NESTED FORLOOP/MATRIX📚📚💐
        
int main()
{

    /*
for (initialization ; condition ; increase/decrease)
           block of statement ;    = */
    
    
    
    int i,j;
    for( i = 0 ; i <= 4 ; i++)//outer for loop for row
    {
       for(j=1; j<=5;j++)//inner forloop columns & printing
        {
            cout << '\t' << j;
        }
    cout<<endl;
    }
    
   
    
  /* op 1       2       3       4      5
        1       2       3       4      5
        1       2       3       4      5
        1       2       3       4      5
        1       2       3       4      5
    */
    
    
    return 0;
}