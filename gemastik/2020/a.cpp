#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

int main(){
    int n;
    cin >> n;

    vector <pair<ll,pair<string,string>>> desa;
    for(int i = 0; i < n; ++i){
        string c1,c2;
        int x1,y1,r1;
        int x2,y2,r2;

        cin >> c1 >> x1 >> y1 >> r1;
        cin >> c2 >> x2 >> y2 >> r1;

        ll jarak = floor(sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)));
        desa.pb({jarak,{c1,c2}});
    }
    sort(desa.begin(),desa.end());
    reverse(desa.begin(),desa.end());
    for(int i = 0; i < desa.size(); ++i){
        cout << desa[i].second.first << " ";
        cout << desa[i].second.second << " ";
        cout << desa[i].first << endl;
    }

}