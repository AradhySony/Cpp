#include <iostream>
using namespace std;

bool isPrime(int s){
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

void allprimes(int n){
    for (int i = 2; i <= n; i++)
    {
        if(isPrime(i)){
        cout<<i<<" ";
    }
    }
    
}

int main() {
    allprimes(20);
    return 0;
}