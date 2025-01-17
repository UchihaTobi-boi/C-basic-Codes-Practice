#include <iostream>
using namespace std;
int main(){
    
    cout<<"odd numbers form 1 to 100 are "<<endl;
    for (int i = 1; i <= 100; i++)
    {
        if ( i%2 == 0) {cout<<"even\n"; continue;} // continue is used to skip


        cout<<i<<endl;
        
       
    }
    
}
