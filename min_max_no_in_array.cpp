#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter Size of Array : ";
    cin>>n;
    int arr[n],minNum=INT_MAX,maxNum=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        minNum=min(arr[i],minNum);
        maxNum=max(arr[i],maxNum);
    }

cout<<"Min Number : "<<minNum<<endl;
    cout<<"Max Number : "<<maxNum;
    
    return 0;
}