#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"**********Tablle Generator**********\n";
    cout<<"Enter a number : ";
    cin>>a;
    cout<<"table of "<<a<<" is : \n";
    for (int i = a; i <= a*10; i+=a)
    {
        cout<<i<<endl;;
    }
    
}