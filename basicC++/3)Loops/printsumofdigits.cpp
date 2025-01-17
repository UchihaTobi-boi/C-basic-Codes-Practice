#include <iostream>
using namespace std;
int main(){
    cout<<"*********Print sum of Digits*******\n";
    int x;
    cout<<"enter number : ";
    cin>>x;
    int sum = 0;
    
    while (x > 0)
        {
            sum = sum + x % 10;
            x = x / 10;

        }
        
        // for (; x > 0 ; x = x/10)
        // {
        //     sum = sum + x % 10;
        // }
        
    cout<<sum;
     
    

    
    
}