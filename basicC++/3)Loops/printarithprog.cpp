#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"**********Print progression (1,3,5,7,9,....n)**********\n";// here the progression is +2

    // the formula for arihmetic progression is An= A + (n-1)D
    //An- last number , A- first number , n = number of number ,D- difference
    //An- last number , A- 1 , n = number of number ,D- 2
    // An= A + (n-1)D
    // An= 1 + (n-1)2
    // An= 1 + 2n - 2
    // An= 2n - 1

    cout<<"Enter numbers printed : ";
    cin>>n;
    cout<<"arithmetic progression is \n";
    
    for (int i = 1; i <= 2*n-1 ; i+=2)
    {
        cout<<i<<endl;;
    }
    
}