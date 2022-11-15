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
    cout<<"Enter Number to Find : "<<endl;
    cin>>k;
    int start=0,end=n-1;

    while (start<=end)
    {
        int mid=(end+start)/2;
        if(arr[mid]==k){
            cout<<"Element "<<k<<" found at Index "<<mid<<" i.e at Position "<<mid+1;
            break;
        }
        else if(k>arr[mid]){
            start=mid+1;
        }
        else if(k<arr[mid]){
            end=mid-1;
        }
        else{
            cout<<"Element "<<k<<" not found";
            break;
        }

    }
    

        return 0 ;

}