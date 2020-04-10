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
        int n,m;
        cin >> n >> m;
        int arr[10000];
        int sum = 0;
        rep(i,n){
            cin >> arr[i];
            sum += arr[i];
        }
        cout << min(sum,m) << endl; 
    }
}