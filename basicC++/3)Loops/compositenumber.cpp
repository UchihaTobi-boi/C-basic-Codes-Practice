#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"********Composite Checker********\n";
    //a number is composite when it is also divisible by  numbers except 1 and itself so.
    cout<<"enter the number : ";
    cin>>a;
    bool flag = true; // number is prime

    for (int i = 2; i < a; i++)
    {
        if (a%i == 0)
        {
            flag = false; // if we found factor then number is composite and flag it false .
            cout<<"Found Factor\n";
            break;
        }
        
    }

    if (flag == true)
    {
        cout<<"number is Prime.";// we assume number is prime and if flag does not change its prime.
    }
    else if (flag == false) // as flag changes due to we found factor flag is false and number is composite.
    {
        cout<<"number is composite.";
    }
    
    
    
}