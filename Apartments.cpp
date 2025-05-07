#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math,inline")
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 long int n,m,k;
cin>>n>>m>>k;
vector< long int> des_size,ap_size;
long int  a;
for(int i=0; i<n; i++){
    cin>>a;
    des_size.push_back(a);
}

for(int i=0; i<m; i++){
    cin>>a;
    ap_size.push_back(a);
}
sort(ap_size.begin(),ap_size.end());
sort(des_size.begin(),des_size.end());
int r=m-1;
long int sum=0;
int i=n-1;



            while(r>=0 && i>=0){
                if(ap_size[r]>= des_size[i]-k && ap_size[r]<=des_size[i]+k){
                    sum++;
                    r--;
                    i--;
                }
                else{
                    if(ap_size[r]+k<des_size[i])
                    i--;
                   else r--;
                   

                }
                
                
            }

            cout<<sum;










return 0;

}