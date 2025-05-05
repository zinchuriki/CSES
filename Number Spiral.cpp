#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        long long x,y;
        cin>>x>>y;
        long long n=max(x,y);
        

        long long t= 1+2*(n-1)+ (n-1)*(n-2);

        //max even then upper decrease and sideways increase

        if(!(n&1)){

            if(x<y){
                cout<<t-(n-min(x,y))<<'\n';
            }
            if(x>y){
                cout<<t+(n-min(x,y))<<'\n';
            }
            
            
        }

        else{
            if(x<y){
                cout<<t+(n-min(x,y))<<'\n';
            }
            if(x>y){
                cout<<t-(n-min(x,y))<<'\n';
            }  

        }

        if(x==y)
            cout<<t<<'\n';


        
        
    }
return 0;

}