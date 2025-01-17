#include <iostream>
using namespace std;
int main(){
    cout<<"*********Print sum of a number plus its reverse *******\n";
    int x;
    cout<<"enter number : ";
    cin>>x;
    int n = x;
    int num = 0;
    int rn = 0;
    
    while (x > 0)
        {
                num = x % 10;
                rn *= 10;
                rn += num;  
                x = x / 10;
            }
              
    cout<<"sum of number "<<n<<" and its reverse "<<rn<<" is : \n";
    cout<<rn+n;

}