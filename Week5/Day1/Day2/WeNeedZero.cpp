
   
 #include <bits/stdc++.h>
using namespace std;

int main() {
     // for fast input output
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   while (t--) {
      long long n, XOR1 = 0,currXOR=0;
      cin >> n;
      vector<long long> a(n),v(n);
      for (int i = 0;i < n;i++) {
         cin >> a[i];
         XOR1 ^= a[i];
      }

    long long XOR2=0;
      for (int i = 0;i < n;i++) {
          v[i] = (XOR1 ^ a[i]);
        // ans = min(ans, currXOR);
      }
       //long long XOR3=0;
      for (int i = 0;i < n;i++) {
          currXOR ^= v[i];
        // ans = min(ans, currXOR);
      }
      if(currXOR==0)
      {
        cout << XOR1<<endl;
      }else{
         cout <<"-1"<<endl;
      }

      //cout << ans << '\n';
   }
   return 0;
}