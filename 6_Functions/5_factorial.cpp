#include <iostream>
using namespace std;

int factorial(int a){
    int fact;
    if (a==0)
    {
        fact=1;
    }

    else if(a<0){
        cout<<"enter a positive number";
    }
    
    else{
        fact=a*factorial(a-1);
    }
    return fact;
}

int main() {
    int a;
    cout<< "enter a number to find factorial of :"<<endl;
    cin>>a;
    int b;
    b=factorial(a);
    cout << "the factorial of "<< a << " is :"<< b <<endl;
    return 0;
}