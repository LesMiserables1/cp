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
        ll p,f;
        ll c_s,c_w;
        ll s,w;
        cin >> p >> f;
        cin >> c_s >> c_w;
        cin >> s >> w;

        ll max_cap = p + f;
        ll min_weight_1 = min(s,w);
        ll min_weight_2 = s+w - min_weight_1;

        int rs = 0;
        ll min_1 = max_cap/min_weight_1;
        if(min_weight_1 == s){
            min_1 = min(c_s,min_1);
            max_cap -= (min_1*s);
        }else{
            min_1 = min(c_w,min_1);
            max_cap -= (min_1*w);
        }
        ll min_2 = max_cap/min_weight_2;
        if(min_weight_2 == s){
            min_2 = min(c_s,min_2);
            max_cap -= (min_2*s);
        }else{
            min_2 = min(c_w,min_2);
            max_cap -= (min_2*w);
        }
        cout << min_1 + min_2 << endl;
    }
}