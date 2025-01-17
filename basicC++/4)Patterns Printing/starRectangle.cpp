#include <iostream>
using namespace std;
int main (){

    // rectangle  bana hai in *
    // rows = m , columns = n
    int m;
    cout<<"enter the number of rows : ";
    cin>>m;
                                               // column ----------->
                                                //   1 2 3 4 5 6 7
                                           /* rows|1 * * * * * * * 
                                                  |2 * * * * * * * 
                                                  |3 * * * * * * * 
                                                  |4 * * * * * * * 
                                                  |5 * * * * * * * 
                                                  |6 * * * * * * * 
                                                  v
                                              */
    int n;
    cout<<"enter the number of columns: ";
    cin>>n;

    for (int  i = 1; i <= m; i++)
    {
        for (int x = 1; x <= n; x++)
        {
            cout<<"* ";
        } 
        cout<<endl;
        

    }
     
}