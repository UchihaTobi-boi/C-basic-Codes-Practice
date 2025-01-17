#include<iostream>
using namespace std;
int main(){
    printf("*************Divisible by 3 and 5 checker*************\n");
    int A; 
    printf("Enter a number to check : ");
    cin>>A;


    if (A % 3 == 0 && A % 5 ==0)
    {
        printf("The number is divisible by 3 and 5.");
    }
    else if (A % 3 == 0 && A % 5 !=0)
    {
        printf("The number is divisible by 3 but not 5!");
    }
    else if (A % 3 != 0 && A % 5 ==0)
    {
        printf("The number is divisible by 5 but not 3!");
    }
    else printf("The number is neither divible by 3 nor 5!");

}