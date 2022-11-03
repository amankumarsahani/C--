#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;
    if(num%2==0){
        cout<<num<<" is divisible by 2"<<endl;
    }
    else if(num%3==0){
        cout<<num<<" is divisible by 3"<<endl;
    }
    if(num%2==0 && num%3==0){
        cout<<num<<" is divisible by both 2 and 3"<<endl;
    }
    return 0;
}