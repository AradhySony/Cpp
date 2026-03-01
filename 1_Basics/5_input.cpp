#include <iostream>
using namespace std;

int main() {
    int age;
    cout<<"The age of moon is :\n";
    cin>>age;
    cout<<"the age entered is :"<<age<<endl;

    // the sum of two numbers a and b
    int a;
    int b;
    cout<<"enter value of a:\n";
    cin>>a;
    cout<<"enter value of b:\n";
    cin>>b;
    cout<<"The sum of a and b is :"<<a+b<<endl;

    // input marks of 3 sub and calc avg marks
    float eng,math,sci,avg;
    cout<<"enter value of eng:\n";
    cin>>eng;
    cout<<"enter value of math:\n";
    cin>>math;
    cout<<"enter value of sci:\n";
    cin>>sci;
    avg=(eng+math+sci)/3;
    cout<<"the average marks in all 3 subjects are:"<<avg<<endl;

    // int/int gives int ie 5/2 = 2 (pura point he chala jayega)
    return 0;
}