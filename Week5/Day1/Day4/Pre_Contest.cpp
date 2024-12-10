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
           
           int n,k;
           cin >> n >> k;
           vector<int>a;
           for(int i=n-k; i<=n; i++)
           {
                a.push_back(i);
           
           }
           for(int i=n-k-1; i>=1; i--)
           {
                a.push_back(i);
           
           }
           for(int i : a)
           {
            cout << i<< " ";
           }
           cout <<endl;
        }
        
    return 0;
}
