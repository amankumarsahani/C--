#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t1=0,t2=1,t3;
    cin>>n;
    // cout<<"Reverse of "<< n <<" is : ";
    for(int i=0;i<n;i++){
        if(i==0){
            cout<<t1<<" ";
        }
        else if(i==1){
            cout<<t2<<" ";
        }
        else{
            t3=t1+t2;
            cout<<t3<<" ";
            t1=t2;
            t2=t3;
        }
    }
    return 0;
}