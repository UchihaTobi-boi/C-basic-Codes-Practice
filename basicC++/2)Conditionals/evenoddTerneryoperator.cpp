#include<iostream>
using namespace std;
int main(){
    printf("***Take an positive integer input and tell if it is even or odd***\n");

    int A;
    printf("Enter an integer : ");
    cin>>A;
    // int B; 
    // B = A % 2;   
    // cout<<"when divided by 2 remiander is : "<<B<<endl;
    // if (B == 0)
    // {
    //     cout<<A<<" is a even number.";
    // }
    // else if (B != 0)
    // {
    //     cout<<A<<" is an odd number.";
    // }


    //**********now using TERENERY OPERATOR**************
    // Just a line saving way of writing if-else
    //          ________________________________________
    //syntax - [    (Condition) ? If True : If False    ]
    //         -----------------------------------------

    (A % 2 == 0) ? cout<<"is an even number" : cout<<"Is an odd number";
//  (Condition)  ?        If True            :         If False        ;


}