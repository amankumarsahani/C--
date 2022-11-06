#include <bits/stdc++.h>
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

int main()
{
    int n, r;
    cin >> n >> r;
    cout << "nCr of "<<n<<" and "<<r << " is : "<< fact(n)/(fact(n-r)*fact(r));
    return 0;
}