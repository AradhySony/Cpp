#include <iostream>
using namespace std;

int main(){
    // variable=condition1 ? statement1:statement2
    bool isAdult;
    int age;
    cout<<"enter your age:\n";
    cin>>age;
    isAdult=age>=18?true:false;
    cout<<"isAdult:"<<isAdult;
    // isAdult 1 so true, if 0 so false;
    return 0;
}