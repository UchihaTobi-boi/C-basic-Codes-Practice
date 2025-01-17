#include<iostream>
using namespace std;
int main(){
    printf("*************Youngest age calculator*************\n");
    int A, B, C; 
    printf("Enter Ram age : ");
    cin>>A;

    printf("Enter Shayam age : ");
    cin>>B;

    printf("Enter Ajay age : ");
    cin>>C;

   if (A<B)   {      // A < B
        if (A<C)     // A < B, A < C = A-Smallest
        {
            cout<<" Ram is the Youngest : "<<A;
        }
        else {       //A < B, C < A = C-Smallest
            cout<<" Ajay is the Youngest : "<<C;
        }
   }
   else{          // B < A

    if (B<C) {        //B < A , B < C = B-Smallest
        cout<<" Shayam is the Youngest : "<<B;
        }
    else {            //B < A, C < B = C-Smallest
        cout<<" Ajay is the Youngest : "<<C;
    }    
   }
   
   
   
}