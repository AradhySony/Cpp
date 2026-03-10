#include <iostream>
using namespace std;

/*
n=5 (i=5)
*        *
**      **
***    ***
****  ****
**********
**********
****  ****
***    ***
**      **
*        *

r1=1st+8sp+1st
r2=2st+6sp+2st
r3=3st+4sp+3st
r2=4st+2sp+4st

    1st inner loop - stars- 1 to i
    2nd inner loop - space- 1 to 2(n-i)
    3rd inner loop - stars- 1 to i

*/


int main() {
    int n;
    cout<<"enter no of rows for butterfly pattern:"<<endl;
    cin>>n;

    //upper half
    for (int i = 1; i <= n; i++)
    {
        //stars
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        
        //spaces
        for(int j=1; j<= 2*(n-i); j++)
        {
            cout<<" ";
        }

        //stars
        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    //lower half
        for (int i = n; i >= 1; i--)
    {
        //stars
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        
        //spaces
        for(int j=1; j<= 2*(n-i); j++)
        {
            cout<<" ";
        }

        //stars
        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}