#include<bits/stdc++.h>
using namespace std;
int main()
{
   //for fast input output
   ios ::sync_with_stdio(false) ;
   cin.tie(nullptr) ;
    int a,b;
    cin>> a >> b;
    int cnt=0;
    for(int i=a; i<=b; i++)
    {
        if(i>=a && i<=b)
        {
            cnt++;
        }
    }
    cout<<cnt<<'\n';



 
  return 0;
}