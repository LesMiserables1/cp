#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        vector<int> arr;
        rep(i,n){
            int x;
            cin >> x;
            arr.pb(x);
        }
        sort(arr.begin(),arr.end());
        reverse(arr.begin(),arr.end());
        for(auto i : arr){
            cout << i << " ";
        }
        cout << endl;
    }
}