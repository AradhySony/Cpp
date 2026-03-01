#include <iostream>
using namespace std;

// armstrong num - 153 = 1^3 + 5^3 + 3^3

int main() {
    int n,num;
    cout<<"enter 3 digit number:";
    cin>>n;
    num=n;

    int dig1=num%10;
    num/=10;
    int dig2=num%10;
    num/=10;
    int dig3=num;

    int cubeSum=dig1*dig1*dig1+dig2*dig2*dig2+dig3*dig3*dig3;
    if(cubeSum==n){
        cout<<n<<"is an Armstrong Number\n";
    }
    else{
        cout<<n<<"is NOT an Armstrong Number\n";
    }
    return 0;
}