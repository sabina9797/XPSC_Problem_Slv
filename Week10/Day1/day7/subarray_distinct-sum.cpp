#include<bits/stdc++.h>
using namespace std;
long long solve(long long n, int x, vector<long long>&arr)
{
    long long  cnt=0;
    int l=0,r=0;
    //long long sum=0;
    map<long long,long long>mp;
 
    
     for(long long i=0; i<n; i++)
     {
        mp[arr[i]]++;
        while(mp.size()>x)
        {
            mp[arr[l]]--;
            if(mp[arr[l]] ==0)
            {
                mp.erase(arr[l]);
            }
            l++;
        }
        cnt=cnt+(i-l+1);
     }
    return cnt;
   

}
int main()
{
   //for fast input output
   ios ::sync_with_stdio(false) ;
   cin.tie(nullptr) ;  
    long long  n,x;
    cin>>n>>x;
    vector<long long>a(n);
    for(long long i=0; i<n; i++)
    {
        cin >> a[i];
    }
    
    cout<<solve(n,x,a)<<endl;
 
  return 0;
}
 
