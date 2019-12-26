#include<bits/stdc++.h>
using namespace std;

struct g
{
    int pos;
    string nama;
};

int main(){
    vector<g> bebek;
    int n;
    string st;

    scanf("%d",&n);
    bebek.resize(1001);
    for(int i = 1; i <= n; i++){
        cin >> bebek[i].nama;
        bebek[i].pos = i;
    }
    sort(bebek[1].nama.begin(),bebek[n].nama.end());
    for(int i = 0; i < n; i++){
        cout << bebek[i].nama;
    }
}