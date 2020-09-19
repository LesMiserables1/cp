#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

int main(){
    int n;
    vector<ll> num;
    cin >> n;
    
    for(int i = 0; i < n; ++i){
        ll x;
        cin >> x;
        num.pb(x);
    }
    ll cost_1 = 0;
    sort(num.begin(),num.end());

    // ll base_num = trunc(sqrt(num[1]));
    // ll max_base_num = base_num+1;
    // for(int i = 1; i < n; ++i){
    //     cost_1 += (abs(base_num-num[i]));
    //     base_num *= base_num;
    //     cost_2 += (abs(max_base_num-num[i]));
    //     max_base_num *= max_base_num;
    // }  
    ll base_num = num[num.size()-1];
    for(int i = n-1; i >= 0; --i){
        cost_1 += (abs(sqrt(base_num)*sqrt(base_num)-num[i]));
        base_num = sqrt(base_num);
        deb(cost_1);
    }
    cout << cost_1 << endl;
}