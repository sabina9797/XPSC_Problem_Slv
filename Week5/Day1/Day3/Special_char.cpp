#include <bits/stdc++.h>
using namespace std;
int main()
{
    // for fast input output
    ios ::sync_with_stdio(false);
    cin.tie(nullptr);
   
    int t;
    cin >> t;
   
    while(t--)
    {
         long long n;
        cin >> n;
    if (n % 2 != 0)
    {
        cout << "NO"<<'\n';
    }else{
         cout << "YES"<<'\n';
    
    long long ans = n/2;
    for(int i=0; i<ans; i++)
    {
        if(i%2==0)
        {
            cout<<"AA";
        }else{
            cout<<"BB";
        }
       
    }
     cout<<endl;
    }
    }

    return 0;
}
