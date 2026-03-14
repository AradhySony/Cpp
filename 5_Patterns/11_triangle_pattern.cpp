#include <iostream>
using namespace std;

    /*
    
    0
    10
    101
    0101
    01010

    */
    

int main(){
    int n;
    cout<<"enter the no of rows :"<<endl;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j<= i; j++)
        {
            cout<<j%2;
        }
        cout << endl;
    }
    
    return 0;
}

// got it on the first try !
// using my new Kreo hive 65 keyboard
