#include<iostream>
using namespace std;
int main(){
    int i=3;
    int n=1;
    while(i>=n){
        int j=3;
        while(j>=n){
            cout<<j;
            j--;
        }
        cout<<endl;
        i--;
    }
}