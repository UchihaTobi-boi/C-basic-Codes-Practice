/*x-------->
i           X
|         X X
|       X X X
|     X X X X
V        
*/

// using If else
#include <iostream>
using namespace std;
int main() {
    int a ;
    cout<<"enter number : ";
    cin>>a;
        for (int i = 1; i <= a ; i++)
        {
            for (int x = 1; x <= a; x++)
            {
                if (i + x >=a + 1)
                {
                   cout<<" X "; 
                }
                else cout<<"   ";
            }
            cout<<endl;   
        }
}