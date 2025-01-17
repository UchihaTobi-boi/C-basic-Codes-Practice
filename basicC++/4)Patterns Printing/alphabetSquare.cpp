#include <iostream>
using namespace std;
int main(){

    int a;
    cout<<"Enter  Side of Square : ";
    cin>>a;

    for (int i = 1; i <= a; i++)      // this loop will take it to next line (number of rows)
    {
        for (int x = 1; x <= a; x++)  // this will print the number of stars in a line (number of columns)
        {
            cout<<" "<<char(x + 64)<<" ";
        }
        cout<<endl;
    }
    
}