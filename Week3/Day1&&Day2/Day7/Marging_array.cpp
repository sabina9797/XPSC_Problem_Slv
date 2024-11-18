#include <bits/stdc++.h>
using namespace std;
int main()
{
    // for fast input output
    ios ::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin >> n >> m;
    vector<long long> v1(n);
    vector<long long> v2(m);
    for(int i=0; i<n; i++)
    {
        cin >> v1[i];
    }
     for(int i=0; i<m; i++)
    {
        cin >> v2[i];
    }
    vector<long long>v3(v1);
    v3.insert(v3.end(),v2.begin(),v2.end());
  sort(v3.begin(),v3.end());
  for(long long value : v3)
  {
    cout << value<<" ";
  }
   



    

    




    return 0;
}
