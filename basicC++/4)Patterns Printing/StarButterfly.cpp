#include <iostream>
using namespace std;

int main(){

    int a = 4;

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        
        {
            cout<<" * ";
        }
        for (int x = 1; x <= a-i; x++)
         if (x < 4 )
        {
            cout<<"   ";
        }
       for (int y = 1; y < a-i+1; y++)
        if (y < 4 )
       {
        cout<<"   ";
       }
       for (int z = 1; z <= i; z++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }

    for (int i = 1; i < a; i++)
    {
        for (int j = 1; j <= a-i; j++)
        {
            cout<<" * ";
        }
        for (int x = 1; x <= i; x++)
         if (x <4 )
        {
            cout<<"   ";
        }
       for (int y = 1; y < i+1; y++)
        if (y < 4 )
       {
        cout<<"   ";
       }
       for (int z = 1; z <= a-i; z++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
     
     
    



}