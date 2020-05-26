#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

int main(){
    int n,m;
    vector<int> arr;
    cin >> n;
    rep(i,n){
        int x;
        cin >> x;
        arr.pb(x);
    }
    cin >> m;
    sort(arr.begin(),arr.end());
    int itr = n%m;
    vector<int> div;
    for(int i = 0; i < m-1; i++){
        if(itr--){
            div.pb(n/m + 1);
        }else
            div.pb(n/m);
    }
    for(int i = 0; i < n; i++){
               
    }
}