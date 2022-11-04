#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,cube=0;
    cin>>n;
    int temp=n;
    while(n>0){
        cube+=pow(n%10,3);
        n/=10;
    }
    cout<<(temp==cube?"Armstrong Number":"Not a Armstrong Number");
    return 0;
}