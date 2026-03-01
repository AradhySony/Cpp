#include <iostream>
using namespace std;

// sum of odd digits of a number using while loop

int main() {
    int n;
    cout<<"enter your number:"<<endl;
    cin>>n;
    int sum=0;
    while (n!=0)
    {
        int lastdig=n%10;
        if (lastdig%2!=0)
        {
            sum=sum+lastdig;
        }
        n=n/10;
    }
    cout<<"the sum of odd digits is :"<<sum<<endl;
    
    return 0;
}