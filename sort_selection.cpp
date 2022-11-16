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

    for(int i=0;i<n-1;i++){
        int min_Index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_Index]){
                min_Index=j;
            }
            if(min_Index!=i){
                int temp = arr[min_Index];
                arr[min_Index]= arr[i];
                arr[i]=temp;
            }
        }
    }

    printArray(arr,n);
    return 0;
}