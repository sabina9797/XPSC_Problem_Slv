#include <bits/stdc++.h>
using namespace std;
int main()
{
    // for fast input output
    ios ::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, x;
    cin >> n >> x;
    vector<pair<long long, int>> a(n) ;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n-2;i++)
    {
        int m=i+1;int k=n-1;
        while(m<k)
        {
            long long s = a[i].first+a[m].first+a[k].first;
            if(s==x)
            {
                
                cout<<a[i].second<<" ";
                cout<<a[m].second<<" ";
                cout<<a[k].second<<" "<<'\n';
                return 0;
            }else if(s<x)
            {
                m++;
            }else{
                k--;
            }
        }
    }
cout<<"IMPOSSIBLE"<<'\n';
    return 0;
}
