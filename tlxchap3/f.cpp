#include<bits/stdc++.h>
#define jumlahKata 10
using namespace std;

vector< vector <string> > nama;
int main(){
    int n;
    string st;
    cin >> n;
    nama.resize(11);
    for(int i = 0; i < n; i++){
        cin >> st;
        nama.at(st.length()).push_back(st);
        // nama[st.length()].push_back(st);
    }
    for(int i = 1; i <= jumlahKata; i++){
       sort(nama[i].begin(),nama[i].end());
       for(int j = 0; j < nama[i].size();j++){
           cout<<nama[i][j]<<endl;
       }
    }
}