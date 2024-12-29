#include <bits/stdc++.h>
using namespace std;
int main()
{
    // for fast input output
    ios ::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a(n);
        vector<long long> a1(1000+1,-1);
        for (long long i = 0; i <n; i++)
        {
            cin >> a[i];
            a1[a[i]] = i+1;


        }
        long long GCD, mx = -1;
       // bool f =false;
        for (long long i = 0; i <=1000; i++)
        {
            for (long long j = 0; j <=1000; j++)
            {
                GCD = __gcd(i,j);
                if(GCD==1 && a1[i]!=-1 && a1[j] !=-1 )
                {
                    
                    mx = max( mx, a1[i] + a1[j]);
                    
                }
            }
        }
        cout << mx <<endl;
        
    }

    return 0;
}
