#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
     long int a;
     int count=0;
    set<long int> hash;
    for(int i=0; i<n; ++i){
        cin>>a;
        hash.insert(a);
        
    }
    cout<<hash.size();
return 0;

}