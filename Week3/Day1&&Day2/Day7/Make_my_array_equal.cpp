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
    long long  n,len;
    cin >> n;
   //  len = n;
    vector<long long>a;
    for(int i=0; i<n; i++)
    {
        long long x;
        cin >> x;
     if(x!=0)
     {
            a.push_back(x);
     }
       
    }
    if(a.size()<=1)
    {
        cout << "YES" <<endl;
        continue;
    }
    sort(a.begin(),a.end());
    bool found = true;
    for(int i=0; i<a.size()-1;i++)
    {
        if(a[i] !=a[i+1])
        {
            cout<<"NO\n";
            found=false;
            break;
        }
    }
   if(found)
   {
    cout <<"YES\n";
   }

   }
 
  return 0;
}
