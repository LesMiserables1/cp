#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i < n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'

int main(){
    int n;
    long long arr[100],p;
    cin >> n;
    rep(i,n){
        cin >> arr[i];
    }
    loop(i,1,n){
        p += abs(arr[0] - arr[i])%2 == 0 ? 0 : 1;
    }
    cout << p << '\n';
}