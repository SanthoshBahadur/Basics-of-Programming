#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    int sum=0;
    int i=0;

    while(i<=n)
    {
        sum=sum+i;
        i=i+2;
        
    }
    cout<<"the sum of even number is "<<sum<<endl;
    return 0;
}