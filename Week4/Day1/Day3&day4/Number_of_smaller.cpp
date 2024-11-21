#include <bits/stdc++.h>
using namespace std;
int main()
{
    // for fast input output
    ios ::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> a1(n);
    vector<int> a2(m);
   
    for (int i = 0; i < n; i++)
    {
        cin >> a1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a2[i];
    }
    int i=0;
    int j=0,cnt =0;
    while(j<m)
    {
        if(i<n && a1[i] <a2[j] )
        {
            cnt++;
            i++;
        }else{
            cout << cnt << " ";
            j++;
        }
    }
    return 0;
}
