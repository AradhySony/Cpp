#include <iostream>
using namespace std;

int main() {
    int n,factorial=1;
    cout<<"enter number to find factorial of :"<<endl;
    cin>>n;
    if(n==0){
        cout<<"factorial of 0 is 1"<<endl;
    }
    else if (n<0)
    {
        cout<<"factorial cannot be calculated for negative"<<endl;
    }
    else
    {
    for (int i = 1; i <= n; i++)
    {
        factorial*=i;
    }
    cout<<"the value of factorial is:"<<factorial<<endl;
    }
    return 0;
}