#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define loop(i,a,b) for(int i = a;i < b; i++)
#define mp make_pair

int main(){
    int n,m;
    vector <int> bil;
    bool c;

    cin >> n >> m;
    loop(i,0,n){
        int nil;
        cin >> nil;
        if(nil%2 == 0){
            if(i == 0)
                c = 0;
            c ^= 0;
        }else{
            if(i == 0)
                c = 0;
            c ^= 1;
        }
    }
    if(!c){
        cout << "Preston\n";
    }else
        cout << "John\n";
}