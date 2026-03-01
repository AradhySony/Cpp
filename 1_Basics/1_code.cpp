#include <iostream>
using namespace std;

int main() {
    cout<<"This is my first cpp code on 1st Jan 2026 2:06AM\n";
    std::cout<<"This is my first cpp code on 1st Jan 2026 3:16AM\n";

    // difference is when in a different library another cout is there then if we want to
    // have the cout that prints output so we have to use std::cout
    
    // even without std we are getting output because we are using namespace std;
    // cout ki definition is in iostream and its declaration is in namespace
    // cpp compiler ignores whitespaces and tabs 
    // a.out is executable file 
    // percentage sign at last in output because aur koi character next line ka insert nahi kiya

    cout<<"i am learning C++ for "<<"DSA\n";
    // another way to for new line is endl
    cout<<"this is new way to endline"<<endl;
    // no % character will be there
    
    return 0;
}