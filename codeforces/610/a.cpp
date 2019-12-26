#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i < n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'

void solve(){
    long long a,b,c,r,prc;
    bool status = 0;
    prc = 0;
    cin >> a >> b >> c >> r;
    if(a > b) swap(a,b);
    if(a < (c+r) && c+r < b){
        status = 1;
        prc +=  b-c-r;
    }    
    if(a < (c-r) && c-r < b){
        status = 1;
        prc += c-r-a;
    } 
    if((c >= b && c-r <= a) || (c <= a && c+r >=b))
    {
        prc = 0;
    }else if(!status)
    {
        prc = abs(a-b);
    }
    
    cout << prc << '\n';
}

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }
}