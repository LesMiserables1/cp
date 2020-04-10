#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define test(i,n)  for (int i = 0; i < n; i++)

int main(){
    vector <pair <string,int> > bebek;
    vector <int> nama;
    string st;
    int n;

    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    
    cin >> n;
    for(int i = 0,j=0; i < n; i++){
        cin >> st;    
        bebek.pb(make_pair(st,i));
        sort(bebek.begin(),bebek.end());
        for(j = i;j >= 0; j--){
            if(bebek[j].first == st){
                break;
            }
        }
        if(j < bebek[j].second )
            nama.pb(j+1);
        else
            nama.pb(bebek[j].second+1);
    }
    for(int i = 0; i < n; i++){
        cout << nama[i]<<endl;
    }
    
}