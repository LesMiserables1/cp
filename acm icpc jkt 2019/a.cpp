#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i < n; i++)

int main(){
    int n,d1 = 0,d2 = 0;
    vector<int> p1;
    vector<int> p2;
    cin >> n;
    rep(i,n){
        int x;
        cin >> x;
        d1 += abs(n-i-x);
        d2 += abs(i+1-x);
        p1.pb(n-i);
        p2.pb(i+1);
    }
    if(d1 < d2)
        for(auto i: p2)
            cout << i << " ";
    else
        for(auto i: p1)
            cout << i << " ";
    cout << endl;
    return 0;
}