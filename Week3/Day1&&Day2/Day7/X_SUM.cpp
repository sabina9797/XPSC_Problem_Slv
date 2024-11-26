#include <bits/stdc++.h>
using namespace std;

void  solve()
{
int row,clm;
cin >>row >> clm;
vector<vector<long long>>a(row,vector<long long>(clm));
 for(int i=0; i<row; i++)
{
 for(int j=0; j<clm; j++)
{
cin >> a[i][j];
}
}
unordered_map<long long,long long>s1,s2;
 for(int i=0; i<row; i++)
{
 for(int j=0; j<clm; j++)
{
s1[i-j] = s1[i-j] + a[i][j];
s2[i+j] = s2[i+j] + a[i][j];
}
}
long long sum = 0;


 for(int i=0; i<row; i++)
{
 for(int j=0; j<clm; j++)
{
    
 sum = max(sum,(s1[i-j]+s2[i+j] -a[i][j]));
}
}

cout<<sum<<'\n';




}



int main()
{
    // for fast input output
   // ios ::sync_with_stdio(false);

    int t;
    cin >>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
