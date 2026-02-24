#include<iostream>
using namespace std;
int bit(int n){
    int ans=0;
    while(n!=0){
        if(n&1){
            ans++;
        }
       n=n>>1;
       
    }
    return ans;
}
int total(int a,int b){
  int ans= bit(a)+bit(b);
  return ans;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<total(a,b);

}