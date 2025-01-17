#include<iostream>
using namespace std;
int main(){
    printf("*************3 Digit or Not Checker*************\n");
    int A; 
    printf("Enter a number to check : ");
    cin>>A;


    if (A>99 && A<1000)
    {
        printf("The number is a 3 digit number.");
    }
    else
    {
        printf("The number is not a 3 digit number.");
    }
   

}