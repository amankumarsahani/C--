#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b){
        cout<<(a>c?a:c);
    }
    else{
        cout<<(b>c?b:c);
    }
    return 0;
}