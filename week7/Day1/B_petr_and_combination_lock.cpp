#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n;
   cin >> n;
   vector<int>a(n);
   for(int i=0; i<n; i++)
   {
    cin >> a[i];
   }
   // O(2^n * n)
   
   bool found = false;
   for (int mask = 0;mask < (1 << n);mask++) {
     // cout << mask << " -> ";
      int sum=0;
      for (int k = 0;k < n;k++) {
         if ((mask >> k) & 1) {
           // cout << 1 << " ";
           sum +=a[k];
         }
         else {
            //cout << 0 << " ";
            sum -=a[k];
         }
      }
          if(sum%360 ==0)
          {
            found = true;
            break;
          }
         
      

      
    
   }
   if(found)
   {
    cout <<"YES"<<endl;
   }else{
    cout <<"NO"<<endl;
   }
  
        

   return 0;
}
