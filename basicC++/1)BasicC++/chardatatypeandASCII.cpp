#include<iostream>
using namespace std;
int main(){

    char x = 'a';
    cout<<x;
    cout<<endl;
    printf("the ASCII value of a is : ");
    cout<<(int)x; // we use typecasting to change the 
                                             //value of a to ascii value    
    
    char A ;
    cout<<"\nenter a character : ";
    cin>>A;
    cout<<"the ASCII value of the character is ";
    cout<<(int)A; ///typecasting to change the value of char to ASCII



}