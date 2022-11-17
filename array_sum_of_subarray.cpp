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
    int curr = 0;
    for(int i=0;i<n;i++){
        curr = 0;
        for(int j=i;j<n;j++){
            curr = curr+arr[j];
            cout<<curr<< " ";
        }
    }
    

        return 0 ;

}