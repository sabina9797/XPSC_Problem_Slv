/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    // for fast input output
    ios ::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c;
    cin >> a >> b >> c;
    int st = min(a, b);
    int ed = max(a, b);
    bool f = false;

    for (int i = st; i <= ed; i++)
    {
        if (i % c == 0)
        {
            cout << i;
            f = true;
            break;
        }
    }
    if (!f)
    {
        cout << "-1\n";
    }
    return 0;
} 
   */
  /*#include<bits/stdc++.h>
  using namespace std;
  int main()
  {
     //for fast input output
     ios ::sync_with_stdio(false) ;
     cin.tie(nullptr) ;   
     int n;
     cin>>n;
     int cnt=0,r;
     int tmp=n;
     while(tmp!=0)
     {
        tmp = tmp/10;
        cnt++;
     }
    if(cnt<4)
    {
       string ss = to_string(n);
       while(ss.length()<4)
       {
        ss ='0' + ss;
      //  break;
       
       }
        cout<<ss<<'\n';
    }else{
        cout<<n<<'\n';
    }

     //cout<<cnt<<'\n';

   
    return 0;
  }*/
 using namespace std;
  int main()
  {
     //for fast input output
     ios ::sync_with_stdio(false) ;
     cin.tie(nullptr) ;   
     int ss;
     cin>>ss;
    
     bool sss[26] ={false};
     for( char ch : ss)
     {
        sss[ch - 'a'] = true;
     }
     //bool f=false;
     for(char i='a' i<='z' ; i++ )
     {
        if(!sss[i]){
            cout<<char(i+'a')<<endl;
             
             return 0;
        }
       
        
     }
     cout<<"None"<<'\n';
     return 0;

    
  }
   
  