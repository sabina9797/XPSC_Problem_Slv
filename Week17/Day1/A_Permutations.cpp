#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
   
    if(n==1)
    {

  cout << "1" << '\n';
  return;
    }
    if(n==2)
    {

  cout << "NO SOLUTION" << '\n';
  return;
    }



    
   vector<int>ans;
   for(int i=1; i<=n; i+=2)
   {
    ans.push_back(i);
   }
   for(int i=2; i<=n; i+=2)
   {
    ans.push_back(i);
   }
   for(int i: ans)
   {
    cout <<i<<" ";
   }
   cout<<endl;
}

int main() {
    ios ::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n ;
    solve(n);
    
    return 0;
}
