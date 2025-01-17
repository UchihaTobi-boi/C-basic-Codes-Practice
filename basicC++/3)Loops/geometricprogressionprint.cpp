#include <iostream>
using namespace std;
int main(){
    cout<<"*******Print Geometric Progression*******";
    // 1,2,4,8,16,32,......n  = *2
    int n;
    cout<<"Number of times to print : ";
    cin>>n;
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        cout<<a<<endl;
        a = a * 2;

    }

}