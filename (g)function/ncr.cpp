#include<iostream>
using namespace std;
int fact(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*i;
        
    }
    return ans;
}
    int ncr(int n,int r){
        
        int num=fact(n);
        int din=fact(r)*fact(n-r);
        
        return num/din;
    }
int main(){
    int n,r;
    cin>>n>>r;
    cout<<ncr(n,r);
    
  
}
    