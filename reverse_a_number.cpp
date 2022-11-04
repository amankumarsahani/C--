#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,rev=0;
    cin>>n;
    cout<<"Reverse of "<< n <<" is : ";
    while(n>0){
        rev=n%10+rev*10;
        n/=10;
    }
    cout<<rev;
    return 0;
}