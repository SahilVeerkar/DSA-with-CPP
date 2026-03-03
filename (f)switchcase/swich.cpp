#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the rating"<<endl;
    cin>>a;
    
    switch(a){
        case 1:cout<<"rating is one star";
        break;
        case 2:cout<<"rating is two star";
        break;
        case 3:cout<<"rating is three star";
        break;
        case 4:cout<<"rating is four star";
        break;
        default:cout<<"this is invalid rating";
    }
}