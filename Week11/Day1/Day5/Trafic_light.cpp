#include <bits/stdc++.h>
using namespace std;
void solve(int x, int n)
{
    

    set<int> ll = {0, x};
    multiset<int> seg = {x};
   while(n--)
   {
    int p;
    cin>>p;
        auto right = ll.upper_bound(p);
        auto left = right;
        left--;
        seg.erase(seg.find(*right - *left));
        seg.insert(p - *left);
        seg.insert(*right - p);
        ll.insert(p);
        cout<<*seg.rbegin()<<" ";
    }
}
int main()
{
    // for fast input output
    ios ::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x;
   cin>>n>>x;
   
    solve(n,x);
   

    

    return 0;
}
