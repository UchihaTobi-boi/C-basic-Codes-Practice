#include <iostream>
using namespace std;

int swap(int* a,int* b){    // & - address
    int temp = *b;
    *b = *a;
    *a = temp;
}
int main (){
        int x = 12;
        int y = 45;
        cout<<x<<" "<<y<<endl;
        swap(&x , &y);
        cout<<x<<" "<<y<<endl;
}