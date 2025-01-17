/*
* * * * * *
*         *
*         *
* * * * * *

*/

#include <iostream>
using namespace std;
int main() {

        for (int i = 1; i <= 4 ; i++)
        {
            for (int x = 1; x <= 6; x++)
            {
                if (i == 1 ||i == 4||x == 1||x == 6)
                {
                     cout<<" * ";
                }
                else cout<<"   ";
                
            }
            cout<<endl;
            
        }
        



}