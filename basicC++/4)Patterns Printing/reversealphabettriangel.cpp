#include <iostream>
using namespace std;
int main(){

    int a;
    cout<<"Enter the side of triangle : ";
    cin>>a;

    for (int i = 1; i <= a; i++)      
    {
        for (int x = 1; x <=a+1-i; x++)  
        {
            cout<<" "<<(char)(x+64)<<" ";
        }
        cout<<endl;

    }
    

}