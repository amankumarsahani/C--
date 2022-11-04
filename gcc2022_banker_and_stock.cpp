// Banker and Stocks
// An investment banker has a tradition to decide what action they want to take on a certain day. The banker decides any of the three actions based on the price of the stock on that day: Buy, Sell or Pass. If the price of the stock has more even number of positive divisors the banker BUYS the stock. If the price of the stock has more odd number of positive divisors, the banker SELLS the stock. If the Price of the stock has equal number of odd and even divisors decides to PASS on the stock; you will be given the price of the stock, which will help the banker decide if they should buy, sell or pass on the stock.

// Constraints
// All values in input are integers.
// 0 <= input integer < 10^18
// Input Format
// Integer (possibly very large): price of the stock.

// Output Format
// String: SELL if there are more positive odd divisors, BUY if there are more positive even divisors, and PASS if there are the same number of odd positive and even positive divisors.
// Do not print debugging Statements while submitting the solution.

#include<bits/stdc++.h>
using namespace std;

int main(){
    long int price,even=0,odd=0;
    cin>>price;
    for(int i=1;i<=price;i++){
        if(price%i==0){
            i%2==0?even++:odd++;
        }
    }
    if(even==odd){
        cout<<"PASS"<<endl;
    }
    else if(even%2==0){
        cout<<"BUY"<<endl;
    }
    else{
        cout<<"SELL"<<endl;
    }
    
    return 0;
}