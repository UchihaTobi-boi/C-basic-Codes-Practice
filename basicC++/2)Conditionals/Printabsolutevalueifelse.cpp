#include<iostream>
using namespace std;
int main(){
    printf("***Take an positive integer input and print its absolute value***\n");
    printf("Absolute value means positive value of a number.\n");

    int A; 
    printf("Enter an integer : ");
    cin>>A;

    if (A >= 0)
    {
        cout<<A;
    }
    else
    {
        cout<<"Absolute Value is : "<<-A;
    }
    

}