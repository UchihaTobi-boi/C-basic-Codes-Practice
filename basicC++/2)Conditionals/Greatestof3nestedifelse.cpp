#include<iostream>
using namespace std;
int main(){
    printf("*************Print Greatest Number*************\n");
    int A, B, C; 
    printf("Enter 1st number : ");
    cin>>A;

    printf("Enter 2nd number : ");
    cin>>B;

    printf("Enter 3rd number : ");
    cin>>C;

   if (A>B)   {      // A > B
        if (A>C)     // A > B, A > C = A-Greatest
        {
            cout<<A<<" is the Greatest Number.";
        }
        else {       //A > B, C > A = C- Greatest
            cout<<C<<" is the greatest Number.";
        }
   }
   else{          // B > A

    if (B>C) {        //B > A , B > C = B-Greatest
        cout<<B<<" is the Greatest Number.";
        }
    else {            //B > A, C > B = C-Greatest
        cout<<C<<" is the Greatest Number";
    }    
   }
   
   
   
}