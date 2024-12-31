#include <bits/stdc++.h>
using namespace std;
int GCD(int i, int i+1) {
   return __gcd(i, i+1); // O(log(min(a,b)))
}

int LCM(int a, int b) {
   // return ((a * b) / __gcd(a, b)); // O(log(min(a,b)))
   return (a / __gcd(a, b)) * b;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   long long n;
   cin >> n ;
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
   for(long long i=0; i<divisors.size(); i++)
   {
      if(GCD(i,i+1) * LCM(i,i+1)==n)
      {
        cout<<i<<""<<i+1;
      }
   }

  
   return 0;    
}