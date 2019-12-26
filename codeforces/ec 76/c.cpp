#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i < n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'

void solve(){
    int n;
    multiset<int> s;
    vector<int> arr;
    cin >> n;
    rep(i,n){
        int x;
        cin >> x;
        s.insert(x);
        arr.pb(x);
    }
    int dm = 0;
    int index;
    rep(i,n){
        if(dm < s.count(i)){
            dm = s.count(i);
            index = i;
        }   
    }
    int p = 0;
    int length = 0;
    int x = 0;
    int mini = INT_MAX;
    for(auto i : arr){
        if(i == index){
            length = x - p + 1;
            p = x;
            if(length > 1)
                mini = min(mini,length);
        }
        x++;
    }
    
    n != 1 ? cout << mini << "\n" : cout<<"-1\n";
}


int main(){
    int tc;
    cin >> tc;
        ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while (tc--)
    {
        solve();
    }
    
}