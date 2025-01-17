/*

 -  -  -  X
 -  -  X  X  X
 -  X  X  X  X  X
 X  X  X  X  X  X  X
 -  X  X  X  X  X
 -  -  X  X  X
 -  -  -  X

*/

#include <iostream>
using namespace std;
int main (){

cout<<"enter the number of rows of pyramid (odd): ";
    int a ;
    int b ;
    cin>>b;
    a = b/2+1;
    
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
        

        for (int i = 1; i<a; i++)
        {
            for (int m = 1; m<=i; m++)
           {
            cout<<"   ";
           }
           for (int n = 1; n<a+1-i; n++)
           {
            cout<<" X ";
           }
           for (int o = 1; o <a-i; o++)
           {
            cout<<" X ";
           }
           cout<<endl;

        }
        
        
            
            
           
           
           
    }
    