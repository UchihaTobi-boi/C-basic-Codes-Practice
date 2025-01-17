#include<iostream>
using namespace std;
int main(){
    printf("*************Profit - Loss Calculator*************\n");
    int cp; 
    printf("Enter the cost price of item : ");
    cin>>cp;
    int sp; 
    printf("Enter the selling price of item : ");
    cin>>sp;

    if (sp>cp)
    {
        printf("The seller has made a profit of : ");
        cout<<sp-cp;
    }
    else if (cp>sp)
    {
        printf("The seller has made a Loss of : ");
        cout<<cp-sp;
    }
    else
    {
        printf("The seller has made no profit no loss.");
    }
   

}