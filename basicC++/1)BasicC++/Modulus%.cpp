#include<iostream>
using namespace std;
int main(){


    int x1;

    cout<<"Enter the 1st value : ";

    cin>>x1;//input taking from user

    int x2;

    cout<<"\nEnter the 2nd value : ";
    
    cin>>x2;//input taking from user
    
    if (x1<x2)
    {
        printf("Rule 1: First number is smaller so the answer will be the first number.");
    }

    if (x1<0 and x2>0)
    {
        printf("Rule 2: First number is negative so answer will be a negative number.");
    }

    if (x1>0 and x2<0)
    {
        printf("Rule 3: Second number is negative but the answer will still be positive .");
    }

    if (x1<0 and x2<0)
    {
        printf("Rule 4: Both number are negative so the answer will be a negative number.");
    }
    
    cout<<"\nThe remainder(Modulus) when 1st value is dividend by 2nd value is :";
    cout<<x1%x2;
    //modulus denoted by symbol '%' means the remainder when we divide 2 values.
    
    //Modulus Rules:
    //1)if first number is smaller the answer will be first number
    //example : 3 % 5 the answer will be 3.


    //2)if first number is negative the answer will be negative 
    //example : -5 % 3 the answer will  be -2

    //3)if second number is negative answer will be negative 
    //example : 5 % -3  the answer will be 2.

    //4)if both values are negative the answer will be negative.
    //example : -5 % -3 the answer will be -2.
}

