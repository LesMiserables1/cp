#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define loop(i,a,b) for(int i = a;i < b; i++)
#define mp make_pair

struct stone{
    bool value = 1;
}
int main(){
    unordered_map<int,stone> umap;
    int n,m,q;

    cin >> n >> m >> q;
    loop(i,0,m){
        int p;
        cin >> p;
        umap[p].value = 0;
    }
    loop(i,0,q){
        string inst;
        cin >> inst;
        if(inst = "go"){
            int p,q;
            cin >> p >> q;
        }

    }

    
}