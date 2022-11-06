#include<bits/stdc++.h>
using namespace std;

int add(int n1,int n2){
    return n1+n2;
}
int sub(int n1,int n2){
    return n1-n2;
}
int multiply(int n1,int n2){
    return n1*n2;
}
int divide(int n1,int n2){
    return n1/n2;
}
int rem(int n1,int n2){
    return n1%n2;
}
int roundoff(int n){
    return floor(n);
}

int main(){
    cout<<"Smart Calculator :-) \nChoose your Action : \n";
    int x;
    cout<<"1. Add\n2. Subtract\n3. Multiply\n4.Divide\n5.Remainder\n6.Round off\n";
    cin>>x;
    float n1,n2;
        cin>>n1>>n2;
    switch (x)
    {
        
    case 1:
        cout<<n1<<" + "<<n2<<" = "<<add(n1,n2);
        break;
    case 2:
        cout<<n1<<" - "<<n2<<" = "<<sub(n1,n2);
        break;
    case 3:
    cout<<n1<<" * "<<n2<<" = "<<multiply(n1,n2);
    break;
    case 4:
    cout<<n1<<" / "<<n2<<" = "<<divide(n1,n2);
    break;
    case 5:
    cout<<n1<<" % "<<n2<<" = "<<rem(n1,n2);
    break;
    case 6:
    cout<<"Round off "<<n1<<" = "<<roundoff(n1)<<endl;
    cout<<"Round off "<<n2<<" = "<<roundoff(n2)<<endl;
    break;
    
    
    default:
        cout<<"Wrong Input....Thank You";
    }
    return 0;
}