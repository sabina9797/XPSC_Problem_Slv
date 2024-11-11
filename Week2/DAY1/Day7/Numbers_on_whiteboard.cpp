#include <bits/stdc++.h>
using namespace std;
int main()
{
    // for fast input output
    ios ::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
       long long n;
       cin >> n;
       priority_queue<int>pq;
       for(int i=1; i<=n; i++)
       {
            pq.push(i);
       }
       long long a,b,r;
       int q = n-1;
       cout <<"2" <<'\n';
       for(int i=1;i<=n-1;i++){
        
    
            a = pq.top();
            pq.pop();
             b = pq.top();
            pq.pop();
             
             cout << a << " " << b<<'\n';
        int p = ceil((a+b)/2.0);
       // cout << p <<" ";
            pq.push(p);
           // cout << pq.top() <<'\n';
       
        }
       
       
       
       

    }
    }
    
 
