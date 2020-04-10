#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

bool primeChecker(ll x){
    if (x <= 2){
        if (x == 2){
            return true;
        }
        return false;
    }
    for (int i = 2; i <= sqrt(x); i++){
        if (x % i == 0){
            return false;
        }
    }
    return true;
}
void solve(){
    ll n;
    cin >> n;
    ll temp = n;
    vector<int> hsl;
    
    for(int i = 2;i <= n && temp > 1; i++){

        if(temp%i == 0){
            temp /= i;
            hsl.pb(i);
            if(primeChecker(temp)) hsl.pb(temp);
        }
        if(primeChecker(temp))
            break;
    }
    if(hsl.size() > 2){
        cout << "YES\n";
        ll temp = 1;
        loop(i,2,hsl.size()-1){
            temp *= hsl[i];
        }
        int x = 0;
        rep(i,3){
            x < 2 ? cout << hsl[i] << " " : cout << temp;
            x++;
        }
        cout << "\n";
    }else
        cout << "NO\n";
}
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }
}