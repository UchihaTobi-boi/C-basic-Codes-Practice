#include<iostream>
using namespace std;
int main(){
    printf("*************Rectangle Area-Perimeter greater value Checker*************\n");
    int L; 
    printf("Enter the length of the Rectange : ");
    cin>>L;
    int B; 
    printf("Enter the Breadth of the Rectangel : ");
    cin>>B;
    int AREA;
    int PERI;

    AREA = L*B;
    PERI = 2*(L+B);

    if (AREA>PERI)
    {
        printf("Area of the Rectangle is Greater than Perimeter.");
    }
    else if (PERI>AREA)
    {
        printf("Perimeter of the Rectangle is Greater than Area.");
    }
    else
    {
        printf("Both are Equal.");
    }
   

}