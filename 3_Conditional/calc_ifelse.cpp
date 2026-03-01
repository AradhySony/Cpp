#include <iostream>
using namespace std;

int main() {
    int a,b;
    char opp;
    cout<<"enter a :\n";
    cin>>a;
    cout<<"enter b :\n";
    cin>>b;
    cout<<"enter your operator \n";
    cin>>opp;
    if (opp=='+')
    {
        cout<<"a+b="<<a+b<<endl;
    }
    else if (opp=='-')
    {
        cout<<"a-b="<<a-b<<endl;
    }
    else if (opp=='*')
    {
        cout<<"a*b="<<a*b<<endl;
    }
    else if (opp=='/')
    {
        cout<<"a/b="<<a/b<<endl;
    }
    else
    {
        cout<<"invalid operator";
    }

    // switch cse
    /*
    switch (opp)
    case '+' : cout<<"a+b="<<a+b<<endl;
                break;
    and so on
    */
    return 0;
}