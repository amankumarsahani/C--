#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter Size of Array : "<<endl;
    cin>>n;
    int arr[n],k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int pd = arr[1]-arr[0];
    int currLength=2,
    maxLength=2;
    
    int j=2;
    while(j<n){
        if(pd == arr[j]-arr[j-1]){
            currLength++;
        }
        else{
            pd = arr[j]-arr[j-1];
            currLength=2;
        }
        maxLength=max(currLength,maxLength);
        j++;
    }
    
    cout<<maxLength;
        return 0 ;

}