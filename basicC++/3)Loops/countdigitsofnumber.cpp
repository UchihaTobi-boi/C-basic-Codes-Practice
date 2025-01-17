#include <iostream>
using namespace std;
int main(){
    cout<<"*********count digits of a given number*******\n";
    int x;
    cout<<"enter number : ";
    cin>>x;
    int count = 0;
    
    while (x > 0)
        {
            count ++;
            x = x/10;

        }
        
        // for (; x > 0 ; x = x/10)
        // {
        //     count++;
        // }
        
    cout<<count;
     
    

    
    
}