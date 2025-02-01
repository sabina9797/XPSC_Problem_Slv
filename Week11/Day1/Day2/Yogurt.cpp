// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n,a,b;

        cin >> n>>a>>b;
    int price1=n*a;
    //int d = b/2;
    //int r = b%2;
    int price2=(n%2)*a +(n/2)*b;
    int ans = min(price1,price2);
    cout<<ans<<endl;
        
    }
}