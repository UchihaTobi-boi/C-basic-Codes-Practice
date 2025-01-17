#include <iostream>
using namespace std;
int main(){

/*
Print the pattern
1
A B
1 2 3
A B C D
1 2 3 4 5
*/

    int a;
    cout<<"Enter the max star of the triangle : ";
    cin>>a;
    for (int i = 1; i <= a; i++)      // this loop will take it to next line (number of rows)
    {
        for (int x = 1; x <= i; x++)  // this will print the number of stars in a line (number of columns)
        {
            if (i % 2 == 0)
            {
                cout<<(char)(x+64)<<" ";
            }
            else if (i % 2 != 0)
            {
                cout<<x<<" ";
            }
            }
        cout<<endl;

    }


}