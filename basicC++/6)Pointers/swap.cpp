#include <iostream>
using namespace std;

int swap(int & x,int & y){    // & - address
    int temp = y;
    y = x;
    x = temp;
}
int main (){
        int x = 12;
        int y = 45;
        cout<<x<<" "<<y<<endl;
        swap(x,y);
        cout<<x<<" "<<y<<endl;
}