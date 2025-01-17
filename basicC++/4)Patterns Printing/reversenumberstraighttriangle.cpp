/*
4
4 3
4 3 2
4 3 2 1
*/

#include <iostream>
using namespace std;
int main(){

    int a;
    cout<<"Enter the max star of the triangle : ";
    cin>>a;

    for (int i = 1; i <= a; i++)      // this loop will take it to next line (number of rows)
    {
        for (int x = 1; x <= i; x++)  // this will print the number of stars in a line (number of columns)
        {
            cout<<a+1-i;
        }
        cout<<endl;

    }
    

}