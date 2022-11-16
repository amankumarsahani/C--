#include<bits/stdc++.h>
using namespace std;


void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // 6 5 4 2 3
    for(int i=1;i<n;i++){
        int current = arr[i]; //5
        int j=i-1;  //6
        while(arr[j]>current && j>=0){  //6>5
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
 
    printArray(arr,n);
    return 0;
}