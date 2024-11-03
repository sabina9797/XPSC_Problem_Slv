#include <bits/stdc++.h>
using namespace std;
int main()
{
    // for fast input output
    ios ::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    long long x;
    cin >> x;
    stack<long long>st;
    for(int i=0; i<n; i++)
    {
        int v;
        cin >> v;
        if(v != x)
        {
            st.push(v);
        }

    }
    stack<long long>st2;

   
    while (!st.empty())
    {
       
       st2.push(st.top());
       //cout<<st2.top()<<" " ;
       st.pop();/* code */
    }
    
    while (!st2.empty())
    {
       
      
       cout<<st2.top()<<" " ;
       st2.pop();/* code */
    }
    

    return 0;
}
