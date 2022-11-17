#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    // Enter Size of Array
    cin>>n;
    int arr[n],k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxNum = INT_MIN;
    
    for(int i=0;i<n;i++){
        maxNum = max(maxNum,arr[i]);
        cout<<maxNum<<endl;

    }
    

        return 0 ;

}