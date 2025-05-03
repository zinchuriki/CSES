#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   string s;
   cin>>s;
   int a=0,ans=1,n=s.size();

   for(int i=0; i<n; i++){
            ans=max(ans,a);
        if(s[i]!=s[i-1])
                a=0;
        a++;
        
   }
   ans=max(ans,a);

   cout<<ans;
return 0;

}