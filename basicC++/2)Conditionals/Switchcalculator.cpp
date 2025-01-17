#include<iostream>
using namespace std;
int main(){
    printf("***Switch Calculator***\n");

    int A;
    printf("Enter 1st number : ");
    cin>>A;

    int B;
    printf("Enter 2st number : ");
    cin>>B;

    char OP;
    printf("Enter the arithmetic operator ");
    printf(" + | - | * | / : ");
    cin>>OP;

    switch (OP){
        case '+':
                cout<<A+B;
                break;
        case '-':
                cout<<A-B;
                break;
        case '*':
                cout<<A*B;
                break;
        case '/':
                cout<<A/B;
                break;                        
         

    }



}