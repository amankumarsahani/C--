#include <bits/stdc++.h>
using namespace std;

int main()
{
    int lower, upper, total = 0, flag;
    cout << "Enter Lower and Upper Range respectively : ";
    cin >> lower >> upper;
    cout<<"Prime numbers between "<<lower<<" and "<<upper<<" are : ";
    for (int i = lower; i <= upper; i++)
    {   
        if(i==1 || i==0){
            continue;
        }
        flag=1;

        for (int j = 2; j <= i/2; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if(flag==1){
            cout<<i<<" ";
            total++;
        }
    }

    cout<<"Total Prime Number are : "<<total;
    return 0;
}


