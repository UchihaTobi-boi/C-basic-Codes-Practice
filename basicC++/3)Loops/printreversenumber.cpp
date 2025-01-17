#include <iostream>
using namespace std;
int main(){
    cout<<"*********Print reverse of Digits*******\n";
    int x;
    cout<<"enter number : ";
    cin>>x;
    int num = 0;
    
    
    while (x > 0)
        {
                num = x % 10;
                cout<<num;
                x = x / 10;
            }
              
    
}