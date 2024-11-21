
#include<bits/stdc++.h>
using namespace std;
int main()
{
   //for fast input output
   ios ::sync_with_stdio(false) ;
   cin.tie(nullptr) ;   
    int n;
    long long k;
    cin >> n >>k;
    vector<long long>a(n);
    for(int i=0; i<n; i++)
    {
        cin >>a[i];
    }
 long long  l=0,r=0,ans = LLONG_MAX;
    
       long long sum =0;
       bool f=false;
    while(r<n)
    {
        
          sum +=a[r];
          if(sum >=k)
          {
            while(sum>=k)
            {
                  f = true;
            ans = min(ans,r-l+1);
          
            sum -=a[l];
            l++;
            }
          }
            r++;
    }
    if(f)
    {
    cout<< ans << endl;
    }else{
        cout<<"-1"<< endl;
    }

  return 0;
}
 
