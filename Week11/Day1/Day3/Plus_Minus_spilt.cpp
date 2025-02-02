#include<bits/stdc++.h>
#define ll long long
#define in cin>>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout<<
#define nl <<endl;
using namespace std;
int main()
{
        int t;cin>>t;
        while(t--)   
        {
            ll n,cnt=0;
            cin>>n;
            string ss;cin>>ss;
            for(ll i=0; i<n; i++)
            {
                if(ss[i] =='+')
                {
                    cnt++;
                }else{
                    cnt--;
                }

            }
                            pr abs(cnt) nl;
        } 
 
  return 0;
}
 
