#include <iostream>
using namespace std;
int main(){
    cout<<"*********Print product of Digits*******\n";
    int x;
    cout<<"enter number : ";
    cin>>x;
    int sum = 1;
    int temp = 1;
    
    
    while (x > 0)
        {
            if (x % 10 != 0)
            {
                sum = sum * (x % 10);
                x = x / 10;
            }
            
            // if (x % 10 != 0)
            // {
            //     temp = x % 10;
            //     sum = sum * temp ;
            //     x = x / 10;
            // }
            

        }
        
        // for (; x > 0 ; x = x/10)
        // {
        //     sum = sum + x % 10;
        // }
        
    cout<<sum;
     
    

    
    
}