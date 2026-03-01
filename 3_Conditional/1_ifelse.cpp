#include <iostream>
using namespace std;

int main() {
    int marks;
    cout<<"enter your age:";
    cin>>marks;
    if(marks>=90){
        cout<<"A\n";
    }
    else if(marks>=80){
        cout<<"B\n";
    }
    else{
        cout<<"fail\n";
    }
    return 0;
}