#include<iostream>
using namespace std;

int main(){

    int a,b;
    char ch;
    cout<<"enter the value of a: "<<endl;
    cin>>a;
    cout<<"enter the value of b: "<<endl;
    cin>>b;


    cout<<"enter an operation: "<<endl;
    cin>>ch;

    switch ( ch )
    {
    case '+': cout<<a+b;
        break;
    case '-': cout<<a-b;
        break;
    case '*': cout<<a*b;
        break;
    case '/': cout<<a/b;
        break;
    case '%': cout<<a%b;
        break;
    default:cout<<"please enter a valid operation"<<endl;
        break;
    }
    return 0;
}       