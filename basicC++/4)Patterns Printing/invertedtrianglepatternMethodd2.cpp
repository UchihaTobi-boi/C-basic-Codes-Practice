/*x-------->
i           X
|         X X
|       X X X
|     X X X X
V        
*/
//using nested for loops 
#include <iostream>
using namespace std;
int main (){

cout<<"enter the number of stars : ";
    int a ;
    cin>>a;
    for (int i = 1; i <=a; i++)
    {
           for (int x = 1; x < a+1-i; x++)
           {
            cout<<"   ";
           }
           for (int y = 1; y <= i; y++)
           {
            cout<<" X ";
           }
           cout<<endl;
           
    }
    



}