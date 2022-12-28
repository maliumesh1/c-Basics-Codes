#include<iostream>
#include<iomanip>
using namespace std; //👍👍 INLINE FUNCTION👍👍


/*💐💐Simple functon चा उपयोग:: code ची redudancy कमी करतो।
    memory space save करतो। 
    call केल्यावर हा खुप कामे करतो,जसे की argument match 
    व इतर कार्य यामुळे हे थोडया ओळीतील कामासाठी खूप वेळ लागतो💐💐
----------------------------------------------------------------------
------------------------------------------------------------------------
           💐💐INLINE FUNCTION💐💐
1)👍TIME वाचवण्यासाठी

2)👍FUNCTION ची बॉडी आपण जिथे FUNCTION CALL करण्याच्या
    ठिकाणी येतो

3)👍परंतु आपण या FUNCTION मध्ये1-2 STATESMENT द्यावे लागतात
4)👍आपण LOOPS, BREAK,SWITCH लावू शकत नाही
5)👍यासाठी आपणाला " inline " keyword वापरतात       

----------------------------------------------------------------------
-----------------------💐CODE💐------------------------------------------------     */
 
inline int square(int a)
{
return a*a;
}

int main()
{    
cout<<"SQUARE OF S:"<<square(8);
return 0;
}

/*----------------------------------------------------------
-----------------💐OUTPUT💐------------------------------------------------
                      
            
            ☺️SQUARE OF S:64👌
            [Process completed - press Enter]
            
            
            
                                                                            */
            