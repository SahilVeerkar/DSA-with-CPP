#include<iostream>
using namespace std;
int feb(int n){
    int a=0;
    int b=1;
    int ans;
    for(int i=0;i<=n;i++){
     ans=a+b;
        a=b;
        b=ans;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<feb(n);
}
   


