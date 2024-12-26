#include<bits/stdc++.h>
using namespace std;
int main()
{
   //for fast input output
   ios ::sync_with_stdio(false) ;
   cin.tie(nullptr) ;  
   int t;
   cin >> t;
   while(t--) 
   {
     long long n;
     cin >> n;
     vector<long long>a(n);
     
     for(long long i=0; i<n; i++)
     {
        cin >> a[i];
     }
     //long long len = a.size();
     sort(a.begin(),a.end());
     long long i=0,j=a.size()-1;
     bool ok = true;
     while(a.size()>1)
     {
        
            if(ok){
            a.erase(a.begin());
        }else{
            a.pop_back();
        }
        ok = !ok;
     }
     cout << a[0] <<'\n';
   }
 
  return 0;
}
 
