#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter number to print table of :"<<endl;
    cin>>n;
    for (int i = 1; i <= 10; i++)
    {
        cout<<n<<"X"<<i<<"="<<n*i<<endl;
    }
    return 0;
}