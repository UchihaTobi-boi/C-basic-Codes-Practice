#include<iostream>
using namespace std;
int main(){
    cout<<"******Grade Sorter******\n";
    int A;
    cout<<"Enter the Percentage of the Student : ";
    cin>>A;

    if (A > 100 || A < 0 ){
        printf("The percentage should be between 0 and 100!\n");
        return 0;
    }
    if (A>=81 and A<=100)
    {
        cout<<"Grade : Very Good ";
    }
    else if (A>=61 and A<=80)
    {
        cout<<"Grade : Good ";
    }
    else if (A>=41 and A<=60)
    {
        cout<<"Grade : Average";
    }
    else{
        cout<<"Grade : Fail";
    }
    
    return 0;
    

}