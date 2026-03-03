#include <iostream>
using namespace std;

int main() {
    int sum=0,n,fibonacci=0;
    cout<<"enter n for n fibonacci numbers:";
    cin>>n;
    for (int i = 0; i <= n; i++)
    {
        fibonacci+=sum;
        sum++;
        cout<<fibonacci<<" ";
    }
    
    return 0;
}