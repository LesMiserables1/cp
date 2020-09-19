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
        vector<int> occur(27);
        cin >> n;
        for(int i = 0; i < n; ++i){
            string s;
            cin >> s;
            for(int j = 0; j < s.length(); ++j){
                int index = s[j] - 'a';
                occur[index]++;
            }
        }
        int i;
        for(i = 0; i < occur.size(); ++i){
            if(occur[i]%n != 0){
                break;
            }
        }
        i == occur.size() ? cout << "YES\n" : cout << "NO\n";
    }
}