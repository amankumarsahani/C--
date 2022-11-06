#include<iostream>
using namespace std;

int fact(int num)
{
    int fact = 1;
    if (num == 0)
        return 1;
    else
    {
        for (int i = 1; i <= num; i++)
        {
            fact*=i;
        };
        return fact;
    }
}

int comb(int n,int r){
    return fact(n)/(fact(n-r)*fact(r));
}


int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<comb(i-1,j-1)<<" ";
        }
        cout<<endl;
    }
    return 0;
}