#include<iostream>
#include<cmath>

using namespace std;

/*
    ____j________>
    | 1
    | 1 1
  i | 1 2 1
    | 1 3 3 1
    | 1 4 6 4 1
    V 1 5 10 10 5 1
*/

int fact(int x){
    int f = 1;
    for (int i = 1; i <= x; i++)
    {
        f *= i ;
    }
    return f;
}

int ncr(int N, int R ){
    int a = fact(N);
    int b = fact(R);
    int c = fact(N-R);
    return a/(b*c);


}

int main(){

    int n ;
    cout<<"enter n : ";
    cin>>n;

    for (int i = 0; i <= n-1; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
        
    }
    
}
