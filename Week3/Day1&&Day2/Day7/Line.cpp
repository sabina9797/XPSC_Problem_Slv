#include<bits/stdc++.h>
using namespace std;
int main()
{
   //for fast input output
   ios ::sync_with_stdio(false) ;
   cin.tie(nullptr) ;  
   int t;
   cin >>t;
   while(t--) 
   {
    int n;
    string ss;
    cin >>n >>ss;
    long long add =0;
    vector<long long> a;
    vector<long long> ans;
    for(long long i=0; i<n; i++)
    {
        long long l=i; 
        long long r=n-i-1;
        if(ss[i] == 'L')
        {
            add+=l;
            if(l<r)
            {
                a.push_back(r-l);
            }
            }else{
                add=add+r;
                if(r<l)
                {
                 a.push_back(l-r);
            }
            }
        
    }
    sort(a.rbegin(),a.rend());
    for(long long i=0; i<a.size(); i++)
    {
        add+= a[i];
        ans.push_back(add);
    }
    while(ans.size() <n)
    {
        ans.push_back(add);
    }
    for(long long val : ans)
    {
        cout <<val <<" ";
    }
    cout<<endl;
   }
    
 
  return 0;
}
 
