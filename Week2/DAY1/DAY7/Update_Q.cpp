#include <bits/stdc++.h>
using namespace std;
int main()
{
    // for fast input output
    ios ::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        long long  n,m;
        string s1,s2;
        cin >> n >>m;
        cin >> s1;//n
        vector<int>a(m);
        set<int>st;
        for(int i=0; i<m; i++)
        {
            cin >> a[i];
            st.insert(a[i]);
        }
        
        cin >> s2;
        sort(s2.begin(),s2.end());
        int k=0;
        for(auto i : st)
        {
            s1[i-1] =  s2[k];
            k++;
        }
    cout << s1 <<"\n";
        


        
    }

    return 0;
}
