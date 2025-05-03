#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        int n;
        cin>>n;
        int a;
        int b=0;
        long long  sum=0;

        for(int i=0; i<n; i++){
            cin>>a;
            if(a<b)
            {
                sum+=b-a;
            }
            else{
                b=a;
            }
           


        }
        cout<<sum;

return 0;

}