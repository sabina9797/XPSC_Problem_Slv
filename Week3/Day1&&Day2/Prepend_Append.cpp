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
        int n;
        cin >> n;
        string ss;
        cin >> ss;
        int ans = n;
        //int sz = ss.size();
    int i=0; 
    int j = n-1;
    while (i<=j)
    {
       if(ss[i] == ss[j])
       {
        break;
       }else{
        ans -=2;
        i++;
        j--;
       }
    }
    cout << ans <<endl;
        
    }

    return 0;
}
