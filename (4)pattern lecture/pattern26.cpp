#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n=5;
    while(i<=5){
        int j=1;
        while(j<=n){
            cout<<j;
            j++;
        }
        int l=1;
        while(l<i){
            cout<<'*';
            cout<<'*'; 
            l++;
        }
        int k=n;
        while(k>=1){
            cout<<k;
            k--;
        }
        
        cout<<endl;
        i++;
        n--;

    }

}