#include<bits/stdc++.h>
using namespace std;
long long solve(long long n,  vector<long long>&arr)
{
    long long  cnt=0;
    int l=0,r=0;
    long long sum=0;
    vector<long long>freq(n,0);
    freq[0] =1;
    
     for(long long i=0; i<n; i++)
     {
        sum+=arr[i];
        long long ans = sum%n;
        if(ans<0)
        {
            ans+=n;
        }
        cnt=cnt+freq[ans];
        freq[ans]++;
     }
    return cnt;
   

}
int main()
{
   //for fast input output
   ios ::sync_with_stdio(false) ;
   cin.tie(nullptr) ;  
    long long  n,x;
    cin>>n;
    vector<long long>a(n);
    for(long long i=0; i<n; i++)
    {
        cin >> a[i];
    }
    
    cout<<solve(n,a)<<endl;
 
  return 0;
}
 
