#include<iostream>
using namespace std;
int main(){
    int A;
    printf("enter an  integer : ");
    cin>>A;
    int B;
    B = A % 2;
    if ( B == 0)
    {
        cout<<A<<" is an even number. ";

    }
    else if (B != 0)
    {
         cout<<A<<" is an odd number. ";
    }
    



}