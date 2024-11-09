#include<bits/stdc++.h>
using namespace std;
int main()
{
   //for fast input output
   ios ::sync_with_stdio(false) ;
   cin.tie(nullptr) ;   
    int n;
     cin >> n;
    vector< long long >a(n);
     for( int i=0; i<n ; i++)
     {
        cin >> a[i];
     }
     sort(a.begin(),a.end());
     int cnt =0;
     int i = 0;
     int j = i+1;
     while(j < n)
     {
        if(a[i] < a[j])
        {
            cnt++;

            i++;
        }
        j++;
       
     }

     cout<<n-cnt<<'\n';
 
  return 0;
}
 
