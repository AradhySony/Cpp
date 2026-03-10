#include <iostream>
using namespace std;

/*

    *
   **
  ***
 ****

for each row : spaces is total rows(n) - row_no (n-i)
eg- for row1: 3 spaces + 1 star
stars- 1 to i

1. Rows → i loop
2. Spaces → first inner loop
3. Stars / Numbers → second inner loop
*/


int main() {
    int n;
    cout<<"enter no of rows for inverted / rotated pyramid:"<<endl;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        //spaces
        for (int j = 1; j <= n-i; j++)
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