#include<iostream>
using namespace std;
int main(){

    int a,b;
    cout<<"a:";
    cin>>a;
    cout<<"b:";
    cin>>b;

    int c;
    c=b;
    b=a;
    a=c;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;





       int num1, num2;
    cout<<"num1:";
    cin>>num1;
    cout<<"num2:";
    cin>>num2;

    int c;
    c=num2;
    num2=num1;
    num1=c;
    cout<<"Values after swapping:"<<endl;
    cout<<"num1:"<<num1<<endl;
    cout<<"num2:"<<num2<<endl;
    
    return 0;
}