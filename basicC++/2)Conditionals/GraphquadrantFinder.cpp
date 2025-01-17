#include<iostream>
using namespace std;
int main(){
    cout<<"******Graph Quadrant Finder******\n";
    int X;
    cout<<"Enter the X coordinate: ";
    cin>>X;
    int Y;
    cout<<"Enter the Y coordinate: ";
    cin>>Y;

    if (X > 0 && Y > 0)     // +X, +Y
    {
    cout<<"The Point is in the 1st quadrant(+,+).";
    }
    else if (0 > X && Y > 0) // -X,+Y
    {
        cout<<"The Point is in the 2nd quadrant(-,+).";
    }
    else if (0 > X && 0 > Y)  // -X,-Y
    {
        cout<<"The Point is in the 3rd quadrant(-,-).";
    }
    else if (X > 0 && 0 > Y)  // +X,-Y
    {
        cout<<"The Point is in the 4th quadrant(+,-).";
    }
    else if (X == 0 &&  Y != 0)
    {
        cout<<"The Point is on the Y-axis.(0,Y).";
    }
    else if (Y == 0 && X != 0)
    {
        cout<<"The Point is on the X-axis.(X,0).";
    }
    else cout<<"The Point is on the Origin(0,0).";
    
    return 0;

    

}