#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the rating"<<endl;
    cin>>a;
  
    while(1){
    switch(a){
        case 1:cout<<"rating is one star"<<endl;
        break;
        case 2:cout<<"rating is two star"<<endl;
        break;
        case 3:cout<<"rating is three star"<<endl;
        break;
        case 4:cout<<"rating is four star"<<endl;
        break;
        default:cout<<"this is invalid rating"<<endl;
     
    }
    exit(0);

   
    
    }
}