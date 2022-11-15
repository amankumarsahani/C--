#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter Size of Array : "<<endl;
    cin>>n;
    int arr[n],k,index=-1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter Number to Find : "<<endl;
    cin>>k;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            index=i;
            break;
        }
    }

    if(index==-1){
        cout<<"Element "<<k<<" not found";
    }
    else
    {
        cout<<"Element "<<k<<" found at Index "<<index<<" i.e at Position "<<index+1;
    }
        return 0 ;

}