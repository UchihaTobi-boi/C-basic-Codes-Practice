#include<iostream>
using namespace std;
int main(){
    printf("***Take an positive integer input and tell if it is divisible by 5***\n");
    int A; 
    printf("Enter an integer : ");
    cin>>A;
    int B; 
    B = A % 5;   
    cout<<"when divided by 5 remiander is : "<<B<<endl;
    if (B == 0)
    {
        cout<<A<<" is a divisible by 5.";
    }
    else if (B != 0)
    {
        cout<<A<<" is not divisible by 5.";
    }
    

}