#include<iostream>
using namespace std;
int main(){
    int i=4;
    int n=1;
    while(i>=n){
        int j=i;
        while(j>=n){
            cout<<j;
            j--;
        }
        cout<<endl;
        i--;
    }
    
}