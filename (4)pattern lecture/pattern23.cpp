#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n=4;
    while(i<=n){
        int j=i;
        while(j<=n){
            cout<<j;
            j++;
        }
        cout<<endl;
        int k=0;
        while(k<i){
            cout<<" ";
            k++;
        }
        i++;
        
    }

    
}