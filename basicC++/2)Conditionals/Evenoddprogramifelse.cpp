#include<iostream>
using namespace std;
int main(){
    printf("***Take an positive integer input and tell if it is even or odd***\n");
    int A; //Declaration
    printf("Enter an integer : ");
    cin>>A;
    int B; 
    B = A % 2;   //Initialization
    //logic is that even number whe divided by 2 has 0 as remiander hence is even.
                // odd numbers when diviided by 2 has 1 as remiander.
    cout<<"when divided by 2 remiander is : "<<B<<endl;
    if (B == 0)
    {
        cout<<A<<" is a even number.";
    }
    else if (B != 0)
    {
        cout<<A<<" is an odd number.";
    }
    

}