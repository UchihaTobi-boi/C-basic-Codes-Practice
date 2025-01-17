#include<iostream>
using namespace std;
int main(){
    printf("*************Print Greatest Number*************\n");
    int A, B, C; 
    printf("Enter 1st number : ");
    cin>>A;

    printf("Enter 2nd number : ");
    cin>>B;

    printf("Enter 3rd number : ");
    cin>>C;

    if (A>B && A>C)
    {
        printf("The 1st number is the Greatest : ");
        cout<<A;
    }
    else if (B>A && B>C)
    {
        printf("The 2nd number is the Greatest : ");
        cout<<B;
    }
    else
    {
        printf("The 3rd number is the Greatest : ");
        cout<<C;
    }
   
}