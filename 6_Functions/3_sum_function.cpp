// #include <iostream>
// using namespace std;

// void sum(int a , int b){
//     cout<<a+b;
// }

// int main() {
//     int x,y;
//     cout<<"enter a:"<<endl;
//     cin>>x;
//     cout<<"enter b:"<<endl;
//     cin>>y;
//     cout<<"the sum of thwo numbers is :";
//     sum(x,y);
//     return 0;
// }
// the above code was way better ofc i did it 


#include <iostream>
using namespace std;

int sum(int a, int b){
    int sum=a+b;
    return sum;
}

int main() {
    int s=sum(2,6);
    cout<<s;
    return 0;
}

// for default arguments use int b=1 in func definition 
// and then only pass one parameter in function declaration