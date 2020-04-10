#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

int main(){
    int n,a[1000],b[1000];
    cin >> n;
    int l = 0,r = 0;
    rep(i,n){
        cin >> a[i];
    }
    rep(i,n){
        cin >> b[i];
        if(a[i]*b[i] == 0){
            if(a[i]==1)
                l++;
            else if(b[i]==1)
                r++;
        }
    }
    int hsl = -1;
    if(l<=r && l*r){
        hsl = (r/l) + 1;
    }else if(l>r)
        hsl = 1;
    cout << hsl << endl;
}