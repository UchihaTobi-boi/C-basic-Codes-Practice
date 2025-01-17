/*
x-------->
i   X       X
|     X   X
|       X 
|     X   X
V   X       X
        
*/

#include <iostream>
using namespace std;
int main() {

        for (int i = 1; i <= 5 ; i++)
        {
            for (int x = 1; x <= 5; x++)
            {
                if (i == x) cout<<" X ";
                else if (x + i == 6) cout<<" X ";
                else cout<<"   ";
                
            }
            cout<<endl;
            
        }
        



}