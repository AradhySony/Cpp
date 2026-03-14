#include <iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

int BinomialCoeff(int n, int r){
    int coeff;
    coeff = factorial(n) / (factorial(r) * factorial(n-r));
    return coeff;
}

int main(){
    cout << BinomialCoeff(3,2) << endl;
    return 0;
}