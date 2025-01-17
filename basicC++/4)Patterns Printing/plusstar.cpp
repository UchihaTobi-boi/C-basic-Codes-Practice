#include <iostream>
using namespace std;
int main() {
        int a;
        cout<<"enter any odd ineteger : "; 
        cin>>a;
        int n = a/2+1;
        for (int i = 1; i <= a ; i++)
        {
            for (int x = 1; x <= a; x++)
            {
                if (i == n || x == n)
                {
                cout<<" x ";
                }
                else cout<<"   ";
                
                
            }
            cout<<endl;
            
        }
        



}