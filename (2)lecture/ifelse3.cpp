#include<iostream>
using namespace std;
int main(){
    char ch;
cout<<"enter the value of a \n";
cin>>ch;
if(ch>='a' && ch<='z'){
    cout<<"ch is lower case";
}
else if(ch>='A' && ch<='Z'){
cout<<"ch is upper case";
}
else{
    if(ch>1){
        cout<<"this is numerical\n";
    }
    else{
        cout<<"this is negetive";
    }

}

}
