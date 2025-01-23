#include<bits/stdc++.h>
using namespace std;
long long solve(long long n,long long x,  vector<long long>&arr)
{
    long long  cnt=0;
    int l=0,r=0;
    long long sum=0;
    while(r<n)
    {
        sum+=arr[r];
        while(sum>x && l<=r)
        {
            sum-=arr[l];
            l++;
        }
        if(sum==x)
        {
            cnt++;
        }
        r++;
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
 
