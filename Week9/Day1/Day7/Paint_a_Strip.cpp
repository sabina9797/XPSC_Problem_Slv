#include<bits/stdc++.h>
using namespace std;
int main()
{
   //for fast input output
   ios ::sync_with_stdio(false) ;
   cin.tie(nullptr) ;   
   long long t;
   cin>>t;
   while(t--)
   {
    long long n;
    cin>>n;
    if(n==1){
        cout<<1<<'\n';
    }
    else if(n==2){
        cout<<2<<'\n';
    } else if(n==3){
        cout<<2<<'\n';
    } else if(n==4){
        cout<<2<<'\n';
    }else{
        long long s1=4,ans=2;
        while(s1<n)
        {
            ans++;
            s1++;
            s1*=2;
        }
        cout<<ans<<endl;
    }

   }
 
  return 0;
}
 
