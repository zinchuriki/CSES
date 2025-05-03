#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
  int n,x,a;
  cin>>n>>x;
  int l=n-2,r=n-1,ans=n;
  vector<int> vec;

  for(int i=0; i<n;i++){
    cin>>a;   
    vec.push_back(a);
  }


  while(l>=0 && r>=0){
    if(vec[l]+vec[r]<=x)
    {
        ans-=r-l;
        l=2*l-r;
        r=l;
    }
    l--;

  }

  

 ans+=ceil(double(n-ans)/2);

 
    
    
 cout<<ans;
return 0;

}