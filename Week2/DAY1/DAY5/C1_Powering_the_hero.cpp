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
        vector<long long>v(n);
        priority_queue<long long>pq;
        
        for(int i=0; i<n; i++)
        {
           cin >> v[i];
           
        }
        long long add = 0;
        for(int i=0; i<n; i++)
        {
           if(v[i]!=0)
           {
                pq.push(v[i]);
           }else{
            if(!pq.empty())
            {
                add += pq.top();
                pq.pop();
            }
           }
        }
        cout << add <<'\n';

    }


 
  return 0;
}
 
