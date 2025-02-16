// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
     
    int t,n,m,d;
    cin>>t;
    while(t--){
      cin>>n>>m;
     
       if(n>=m){
           d=n-m;
          if(d%2==0){
              cout<<"Yes"<<endl;
          }
          else{
              cout<<"No"<<endl;
          }
          //cout <<"No"<<endl;
      }
      else{
cout <<"No"<<endl;
      }
        
        
    }
   
 
    return 0;
}