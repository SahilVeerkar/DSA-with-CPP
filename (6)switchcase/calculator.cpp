#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    char op;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    cout<<"enter the operator"<<endl;
    cin>>op;
   switch(op){
    case '+':cout<<"a+b :- "<<a+b;
    break;
    case '-':cout<<"a-b :- "<<a-b;
    break;
    case '*':cout<<"a*b :- "<<a*b;
    break;
    case '/':cout<<"a/b :- "<<a/b;
    break;
    default:cout<<"this is not valid";
    break;
   }
}
