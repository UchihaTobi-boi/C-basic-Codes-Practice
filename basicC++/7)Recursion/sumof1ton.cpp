#include <iostream>
using namespace std;

void Print(int n,int sum){
    
    if (n == 0) {
        cout<<sum;
        return;}

    Print(n-1,sum+n);
    
}

int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    Print(n,0);


}
