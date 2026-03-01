#include <iostream>
using namespace std;

int main() {
    int n,result=0,last_dig;
    cout<<"enter ur number to be reversed:"<<endl;
    cin>>n;
    while (n!=0)
    {
        last_dig=n%10;                                          //this is the logic of the reversing a digit
        n=n/10;
        result=result*10+last_dig;
    }
    cout<<"the number reversed is :"<<result<<endl; 
    return 0;
}