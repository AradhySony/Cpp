#include <iostream>
using namespace std;

int main() {
    int tax,income;
    cout<<"enter your income:\n";
    cin>>income;
    if(income<500000){
        cout<<"tax is 0%";
    }
    else if (income>=500000 && income<=1000000)
    {
        cout<<"tax is 20%";
    }
    else{
        cout<<"tax is 30%";
    }
    return 0;
}