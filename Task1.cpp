//Create a calculator in C++ that supports all basic arithmetic 
//operations and allows users to input an unlimited number of 
//operations and numbers?

#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    char op;
cout<<"enter first number"<<endl;
cin>>num1;
cout<<"enter second number"<<endl;
cin>>num2;
cout<<"chose any of the following operator + ,-,*,/"<<endl;
cin>>op;
switch(op){
case '+':
cout<<num1+num2<<endl;
break;
case '-':
cout<<num1-num2<<endl;
break;
case '*':
cout<<num1*num2<<endl;
break;
case '/':
if (num2==0){
cout<<"Error!division by zero"<<endl;
}else {
 cout << "Result: " << num1 / num2 << endl;}
break;
default:
cout<<"invalid operator"<<endl;
}
return 0;
}