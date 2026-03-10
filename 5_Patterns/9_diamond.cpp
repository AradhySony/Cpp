#include <iostream>
using namespace std;

//we can break diamond into 2 pyramids
/*

    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

*/

/*
1st - 3sp+1st
sp=n-i
st=2i-1
*/

int main() {
    int n;
    cout<<"enter no of rows for diamond triangle:"<<endl;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        //sp
        for(int j=1; j<=n-i; j++)
        {
            cout<<" ";
        }
        for(int j=1; j<=2*i-1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n-i; j++)
        {
            //sp
            cout<<" ";
        }
        for (int j = 1; j <=2*i-1 ; j++)
        {
            //st
            cout<<"*";
        }
        
        cout<<endl;
    }
    
    
    return 0;
}