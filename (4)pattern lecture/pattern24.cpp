#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n=4;
    while(i<=n){
        int space=n-i;
        while(space){
         cout<<" ";
            space--;
        }
        int j=1;
        while(j<=i){
            cout<<j;
            j++;
        }
        int next=i-1;
        while(next){
            cout<<next;
            next--;
        }
         cout<<endl;
         i++;
    }
}