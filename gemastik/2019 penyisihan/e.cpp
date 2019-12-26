#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define loop(i, a, b) for (int i = a; i < b; i++)
#define mp make_pair

int main(){
    int n;
    vector< pair<int,int>> tri;

    cin >> n;
    loop(i,0,n){
        int x,y,w,z;
        cin >> x >> y >> w >> z;
        tri.pb(mp(abs(y-z),abs(x-w)));
    }
    sort(tri.begin(),tri.end());
    reverse(tri.begin(),tri.end());
    int c = 0; 
    loop(i,0,n-1){
        loop(j,i,n){
            if(!(tri[i].first <= tri[j].first && tri[i].second <= tri[j].second)){
                if(!(tri[j].first <= tri[i].first && tri[j].second <= tri[i].second))
                    if((pow(tri[i].first,2)+pow(tri[i].second,2) - pow(tri[j].first,2) + pow(tri[j].second,2)) < 0)
                    c++;
            }
        }
    }
    cout << c << endl;
}