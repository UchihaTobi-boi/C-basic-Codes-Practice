/*

 -  -  -  X
 -  -  X  X  X
 -  X  X  X  X  X
 X  X  X  X  X  X  X

*/

#include <iostream>
using namespace std;
int main (){

cout<<"enter the number of rows of pyramid : ";
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
           for (int z = 1; z < i; z++)
           {
            if (i != 1)
            {
                cout<<" X ";
            }
            
            
           }
           
           cout<<endl;
           
    }
    



}