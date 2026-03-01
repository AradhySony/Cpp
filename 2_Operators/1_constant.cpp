#include<iostream>
#define ll long long 
using namespace std;

int main(){
    ll x=25;
    cout<<"the size of ll is :"<<sizeof(x);
    // constants cannot be changed and have to be initialised
    const float g=9.6;
    // diff bw macro (#define X 6) and constants
    // macros dont take space in memory as we dont give them type
    // whereas const does take memory
    return 0;
}