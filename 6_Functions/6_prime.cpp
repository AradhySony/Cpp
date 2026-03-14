#include <iostream>
using namespace std;

bool isPrime(int s){
    if (s==1) 
    {
        return false;
    }
    else{
        for (int i = 2; i <= s-1; i++)
        {
            if (s%i==0)
            {
                return false;
            }
        }
        
    }
    return true;
}

bool isPrime2(int s){
    if (s==1) 
    {
        return false;
    }
    else{
        for (int i = 2; i*i <= s; i++)
        {
            if (s%i==0)
            {
                return false;
            }
        }
        
    }
    return true;
}


int main() {
    int n;
    cout<<"enter number to check prime:"<<endl;
    cin>>n;
    cout<<"is "<<n<<" a prime number: "<<isPrime(n)<<endl;
    cout<<"1 means true and 0 means false"<<endl;
    return 0;
}