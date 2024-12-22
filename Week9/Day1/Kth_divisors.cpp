#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   long long n,k;
   cin >> n >>k;
   vector<long long> divisors;
   for (long long i = 1;i * i <= n;i++) {
      if (n % i == 0) {
         divisors.push_back(i);
         if ((n / i) != i) {
            divisors.push_back(n / i);
         }
      }
   }

   sort(divisors.begin(), divisors.end());
   if(k>divisors.size()){
    cout<<"-1"<<endl;
   }else{
    cout<<divisors[k-1];
   }

  
   return 0;
}