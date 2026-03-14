#include <iostream>
using namespace std;

int product(int a , int b ){
    int product=a*b;
    return product;
}

void odd_even(int a){
    int odd,even;
    if (a%2==0) 
    {
        cout<<a<<" is even";
    }
    else{
        cout<<a<<" is odd";
    }
}

int main() {
    int x,y,a,multi;
    cout<<"enter number1 for product: "<<endl;
    cin>>x;
    cout<<"enter number2 for product: "<<endl;
    cin>>y;
    cout<<"enter number to check odd/even:"<<endl;
    cin>>a;
    multi=product(x,y);
    cout<<"the product of "<<x<<" and "<<y<<" is: "<<multi<<endl;
    odd_even(a);
    return 0;
}