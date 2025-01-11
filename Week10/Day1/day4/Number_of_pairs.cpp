#include <bits/stdc++.h>
using namespace std;
int main()
{
    // for fast input output
    ios ::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >>t;
    while(t--)
    {
    long long n,l,r;
    cin >> n >>l>>r;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    long long sum=0;
    for(int i=0; i<n; i++)
    {
        long long left = l-a[i];
        long long right = r-a[i];
    
        
        
       long long  cnt1 = lower_bound(a.begin() +i+1, a.end(), left) - a.begin();
        long long cnt2  = upper_bound(a.begin()+i+1, a.end(), right) - a.begin();
        sum+=(cnt2-cnt1);
    }
       
        // cout << cnt2-cnt1 << " ";
        cout<<sum<<endl;
    
    }
    return 0;
}

 
