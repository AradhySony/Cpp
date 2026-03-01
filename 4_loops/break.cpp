// program such that user enter a until and if its a mutliple of 10 it breaks .

#include <iostream>
using namespace std;

int main() {
    int n;
    
    do
    {
        cout<<"enter your number:"<<endl;
        cin>>n;
        if (n%10==0)
        {
            cout<<"entered number is a multiple of 10 "<<endl;
            break;
        }
        
    } while (true);             //means it will always run
    
    return 0;
}