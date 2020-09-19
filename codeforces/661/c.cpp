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
        int n;
        cin >> n;
        int num[101];
        int frek[101] = {0};
        set<int> st;
        for(int i = 0; i < n; ++i){
            cin >> num[i];
            frek[num[i]]++;
            st.insert(num[i]);
        }
        int max_sum = *st.begin() + *(st.rbegin());
        // cout << max_sum;
        int max_team = 0;
        for(int i = 2; i <= max_sum; ++i){
            int occur = 0;
            for(auto j : st){
                if(i > j){
                    occur += min(frek[i-j],frek[j]);
                }else if(i<j){
                    occur += min(frek[j-i],frek[j]);
                }
            }
            // deb(occur);
            max_team = max(max_team,occur/2);
        }
        cout << max_team << endl;
    }
}