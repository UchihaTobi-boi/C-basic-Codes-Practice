#include <iostream>
using namespace std;

int main (){
        int x = 12;
        cout<<x<<endl;

        int* ptr = &x;    // initializing pointer ptr and giving it address of x.
        *ptr = 20;        // using pointer dereference/* operator to change  value  of x.

        cout<<x<<endl;
}