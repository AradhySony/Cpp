#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter ur number:"<<endl;
    cin>>n;
    bool isprime=true;
    for (int i = 2; i < n; i++)     //i is running from 2 to n-1 as n toh khus se divide ho he jayega
    {
        if(n%i==0)          //i is a factor of n;   i completely divides n;    i is not prime
        isprime=false;
        break;
    }
    if (isprime==true)
    {
        cout<<"number is prime"<<endl;
    }
    else
    {
        cout<<"number is not prime"<<endl;
    }
    return 0;
}

// for optimization 
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int n;
//     cout<<"enter ur number:"<<endl;
//     cin>>n;
//     bool isprime=true;
//     for (int i = 2; i < sqrt(n); i++)     //i is running from 2 to n-1 as n toh khus se divide ho he jayega
//     {
//         if(n%i==0)          //i is a factor of n;   i completely divides n;    i is not prime
//         isprime=false;
//         break;
//     }
//     if (isprime==true)
//     {
//         cout<<"number is prime"<<endl;
//     }
//     else
//     {
//         cout<<"number is not prime"<<endl;
//     }
//     return 0;
// }