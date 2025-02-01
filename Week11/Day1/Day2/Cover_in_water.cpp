// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void solve(int n)
{
    string ss;cin>>ss;
    int cnt=0, ans=0;
    for(int i=0; i<n; i++)
    {
        if(ss[i] == '.')
        {
            cnt++;ans++;
        }else{
            cnt=0;
        }
        if(cnt>=3)
        {
            break;
        }
    }
    if(cnt>=3)
    {
        cout<<2<<endl;
    }else{
        cout<<ans<<endl;
    }

    }
    
    
    
    

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
      
        cin >> n ;
        solve(n);

        
    }
}