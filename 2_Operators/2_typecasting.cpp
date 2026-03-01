#include <iostream>
using namespace std;

int main() {
    cout<<(10/3)<<endl;
    cout<<(10/3.0)<<endl;
    // implicit conversion - smaller datatype to bigger datatype
    cout<<('A' + 1)<<endl;  //single quotes only for char 'A' - 65

    //explicit - our choice of conversion
    cout<<(int)('A')<<endl;
    cout<<(float(10)/3)<<endl;
    cout<<(bool(3)+1)<<endl;   //bool(0)-0 bool(n)- 1
    cout<<((bool)3+1);
    return 0;
}