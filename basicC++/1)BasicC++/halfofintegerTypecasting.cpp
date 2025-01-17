#include<iostream>
using namespace std;
int main(){

    printf("*****HALF OF INTEGER (Typecasting*****)\n");
    printf("Converting integer into float\n");
    int x;
    printf("Enter a Number : ");
    cin>>x;
    float A = (float)x ;// converting from integer to float value (Typecasting)
    printf("the half of the number is : ");
    cout<<A/2;


}