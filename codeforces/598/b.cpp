#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i < n; i++)
typedef vector<int> vi;

void solve(){
    vi bil;
    set<int> bil_s;
    int n;
    cin >> n;
    rep(i,n){
        int x;
        cin >> x;
        bil.pb(x);
        bil_s.insert(x);
    }
    int x = n-1;
    int j = 0;
    for(auto i : bil_s){
        auto it = find(bil.begin(),bil.end(),i);
        int pos = it - bil.begin();
        if(x > 0){
            int c = x > pos ? pos : x;
            rep(j,c){
                if(*(bil.begin()+pos-j-1) < *(bil.begin()+pos-j)) break;
                iter_swap(bil.begin()+pos-j-1,bil.begin()+pos-j);
                x--;
            }
        }else  
            break;
    }
    for(auto i : bil){
        cout << i << " ";
    }
    cout << '\n';
}

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }
}