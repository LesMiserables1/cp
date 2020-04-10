#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

int main(){
    int n,l=0,r=0;
    char a;
    cin >> n;
    rep(i,n){
        cin >> a;
        if(a == 'L')
            l++;
        else
            r++;
    }
    cout << l+r+1 << endl;
}