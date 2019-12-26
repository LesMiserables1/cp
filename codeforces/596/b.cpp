#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i < n; i++)

void solve(){
    int n,k,d,cnt = 0,c = -1;
    set <int> subs;
    vector<int> show;
    cin >> n >> k >> d;
    int min = INT_MAX;
    rep(i,n){
        int x;
        cin >> x;
             
        if(i > d-1){
            if(min > subs.size())
                min = subs.size();
            c = show[0];
            show.erase(show.begin());
            if(find(show.begin(),show.end(),c) == show.end()){
                subs.erase(subs.find(c));
            }
        }
        subs.insert(x);   
        show.pb(x); 
    }
    if(min > subs.size()) min = subs.size();
    cout << min << endl;
    return;
}

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }
    return 0;
}