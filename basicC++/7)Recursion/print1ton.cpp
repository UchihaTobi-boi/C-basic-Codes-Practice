#include <iostream>
using namespace std;

void Print(int n){
    
    if (n == 0) return; 
    Print(n-1);
    cout<<n<<endl;
    
    
    
    
}

int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    Print(n);


}
