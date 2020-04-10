#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

ll n,arr[9999999],m;
ll count(ll x){
    ll temp = 0;
    for(ll i = 0; i < n;i++){
        temp += x/arr[i];
    }
    return temp;
}
ll lb(ll l, ll r){
    ll mid = l +(r-l)/2;
    ll check = count(mid);
    if(l > r){
        if(check == m)
            return mid;
        else 
            return -1;
    }
    if(check == m || check > m)
        return lb(l,mid-1);
    else if(check < m)
        return lb(mid+1,r);
}
ll ub(ll l, ll r){
    ll mid = (l+r)/2;
    ll check = count(mid);
    if(l > r){
        if(check == m)
            return mid; 
        else 
            return -1;
    }else{
        if(check == m || check < m)
            return ub(mid+1,r);
        else if(check > m)
            return ub(l,mid-1); 
    }
}
pair<ll,ll> binser(ll l, ll r){
    pair<ll,ll> hasil;

    hasil.first = lb(l,r);
    hasil.second = ub(l,r);
    
    return hasil;
}
int main(){
    pair<ll,ll> hsl;
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cin >> n >> m;
    ll min1 = INT64_MAX;
    for(ll i = 0;i < n;i++){
        cin >> arr[i];
        min1 = min(min1,arr[i]);
    }
    hsl = binser(1,min1*m);
    hsl.first == -1 || hsl.second == -1 ? cout << hsl.second - hsl.first : cout << hsl.second - hsl.first + 1;
    cout << '\n';
}