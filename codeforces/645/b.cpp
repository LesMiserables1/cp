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
    while(T--){
        int n;
        cin >> n;
        vector<int> gr;
        for(int i = 0; i < n; ++i){
            int x;
            cin >> x;
            gr.pb(x);
        }
        sort(gr.begin(),gr.end());
        int cur_gr = 1;
        int sub_x = -1;
        for(int i = 0; i < n; ++i){
            if(gr[i] < i+2){
                sub_x = i;
            }
        }
        cout << cur_gr + sub_x + 1 << endl;
    }
}