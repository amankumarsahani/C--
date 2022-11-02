#include<iostream>
using namespace std;

int main(){
    int n;
    bool flag = false;
    cin>>n;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flag = true;
            break;
        }
        else{
            flag = false;
        }
    }

    cout<<(flag?"Not a Prime Number":"Prime Number");
    return 0;
}