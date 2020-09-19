#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

int main(){
    int tc; cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        string res = "";
        // if(n%2){
            for(int i = 0; i < n - 1 - (n-1)/4; ++i){
                res += '9';
            }
            for(int i = 0; i <= (n-1)/4; ++i){
                res += '8';
            }
        // }else{
        //     for(int i = 0; i < n-1;++i){
        //         res += '9';
        //     }
        //     res += '6';
        // }
        cout << res << endl;
        // int subs = 1;
        // int sum = 1;
        // for(int i = 0; i < n; ++i){
        //     sum *= 10;
        // }
        // sum--;
        // for(int i = 0; i < n/5; ++i){
        //     subs *= 10;
        //     subs++;
        // }
        // deb(sum);
        // deb(subs);
        // cout << sum-subs << endl;
    }
}