#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n;
    while (t--){
        cin>>n;
        int a[n];
        long long int m=1;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        a[0]=a[0]+1;
         for(int i=0;i<n;i++){
            m=m*a[i];
        }
        cout<<m<<endl;
    }
 
 
 
    return 0;
}