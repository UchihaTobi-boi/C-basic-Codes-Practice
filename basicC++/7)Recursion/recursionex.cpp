#include <iostream> 
using namespace std;


void Greet(int n){
    if (n == 0)
    {
        return;
    }
    
    cout<<"Hey"<<endl;
    Greet(n-1);

}

int main(){
 Greet(3);
}