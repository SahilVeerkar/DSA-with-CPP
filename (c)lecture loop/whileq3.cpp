#include<iostream>
using namespace std;
int main(){
    int i=2;
    int n=4;
    while(i<n){
        if(n%i==0){
            cout<<"this is not prime"<<i<<endl;
        }
        else{
            cout<<"this is prime"<<i<<endl; 
        }
        i++;
    }

}