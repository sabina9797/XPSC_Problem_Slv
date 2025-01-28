#include<bits/stdc++.h>
using namespace std;
int main()
{
   //for fast input output
   ios ::sync_with_stdio(false) ;
   cin.tie(nullptr) ;   
  long long n;cin>>n;
  vector<long long>a(n);
  vector<long long>tower;
  for(long long i=0; i<n; i++)
  {
    cin >> a[i];
  }
for(long long i: a)
{
    auto it = upper_bound(tower.begin(),tower.end(),i);
    if(it==tower.end())
    {
        tower.push_back(i);
    }else{
        *it=i;
    }
}
cout<<tower.size()<<endl;
  return 0;
}
 

