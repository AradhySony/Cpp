#include <iostream>
using namespace std;

/*
make general case for:
*
**
***
****
*/

int main() {
    int n;
    cout<<"enter n for start pattern:"<<endl;
    cin>>n;

    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*"<<"";
        }
        cout<<endl;
    }
    
    return 0;
}