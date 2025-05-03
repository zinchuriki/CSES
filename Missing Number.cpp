#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   long long n;
   cin>>n;
   long long sum=0,a;
   for(int i=0; i<n-1; i++){
    cin>>a;
    sum+=a;
   }
   cout<<(n*(n+1))/2-sum;

return 0;

}