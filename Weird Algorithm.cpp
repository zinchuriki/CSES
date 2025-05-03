


// If n is even, the algorithm divides it by two, and if n is odd, the algorithm multiplies it by three and adds one.




#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n; 
    cin>>n;

    while(n!=1){
        cout<<n<<" ";
        if(n&1){
            n*=3;
n++;
        }
        else{
            n/=2;
        }
     
    }
    cout<<1;

return 0;

}