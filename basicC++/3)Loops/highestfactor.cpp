#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"********Highest Factor Finder********\n";
    cout<<"enter the number : ";
    cin>>a;
    int HF = 1;

    for (int i = 1; i < a; i++)
    {
        if (a%i == 0)
        {
            HF = i;
        }
        
    }

cout<<"highest factor is : "<<HF;

    
}