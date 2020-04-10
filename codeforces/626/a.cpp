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
        int arr[1001];
        vector<int> hsl;
        int odd = 0;
        int x = -1;
        rep(i,n){
            cin >> arr[i];
            if(arr[i]%2 == 0){
                x = i;
            }else{
                odd++;
                hsl.pb(i);
            }
        }
        if(x!=-1){
            cout << 1 << endl <<  x+1 << endl;
            continue;
        }
        if(odd >= 2){
            cout << 2 << endl <<    hsl[0]+1 << " " << hsl[1]+1 << endl;
            continue;
        }
        cout << -1 << endl;
    }
}