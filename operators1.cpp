#include<iostream>
using namespace std;
int main(){
    int num1 =6;  
    int num2= 3;
    cout<<num1 + num2<<endl;
    cout<<num1 % num2<<endl;

    cout<<(num1==num2)<<endl;
    cout<<(num1!=num2)<<endl;
    bool exp1=true;
    bool exp2=false;
    cout<<(exp1&&exp2)<<endl;
    cout<<(exp1||exp2)<<endl;
    cout<<!exp1<<endl;
      num1+=3;
      cout<<num1<<endl;
      num2-=2;
      cout<<num2<<endl;

int num3=5; //0101
cout<<(num3<<1)<<endl; //10
cout<<(num3>>1)<<endl; //2
int num4 = 8; //1000
cout<<(num3&num4)<<endl; //0
cout<<(num3|num4)<<endl; //1101 = 13
 
 cout<<sizeof(num3)<<endl;
 int d=3;
 cout<<(d++)<<endl;
 cout<<(++d)<<endl;
 cout<<(d--)<<endl;
 cout<<(--d)<<endl;

}