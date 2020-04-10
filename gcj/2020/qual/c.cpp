#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

int main(){
    int T; cin >> T;
    for(int k = 1; k <= T; ++k){
        int n;
        cin >> n;
        vector<pair <pair<int,int>,int> > arr;
        string rs;
        rs.resize(n);
        for(int i = 0; i < n; i++){
            int x,y;
            cin >> x >> y;
            arr.pb({{x,y},i});
        }
        sort(arr.begin(),arr.end(),[](const pair <pair<int,int>,int> & a, const pair <pair<int,int>,int>& b) {
            return a.first < b.first;
        });
        bool status = 1;
        pair<int,int> c = {0,0};
        pair<int,int> j = {0,0};
        for(int i = 0; i < n; ++i){
            if (arr[i].first.first >= c.second){
                c.first = arr[i].first.first;
                c.second = arr[i].first.second;
                rs[arr[i].second] = 'C';
            }else if(arr[i].first.first >= j.second){
                j.first = arr[i].first.first;
                j.second = arr[i].first.second;
                rs[arr[i].second] = 'J';
            }else{
                cout << "Case #" << k << ": IMPOSSIBLE" << endl;
                status = 0;
                break;
            }
        }
        if(status) cout << "Case #" << k << ": " << rs << endl;
    }
}