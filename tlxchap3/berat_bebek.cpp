#include<bits/stdc++.h>
using namespace std;

int binser_modif(int l, int r, int (&bebek)[100001],int numb){
    if(l <= r){
        int mid = (l + r) /2;
        if(numb < bebek[mid])
            return binser_modif(l,mid-1,bebek,numb);
        if(numb >= bebek[mid])
            return binser_modif(mid+1,r,bebek,numb);
        else{
            return mid;
        }
    }
    return r;
}
int main(){
    int x,y,n,q,bebek[100001];
    
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        scanf("%d",&bebek[i]);
    }
    scanf("%d",&q);
    for (int i = 0; i < q; i++){
        scanf("%d %d",&x,&y);
        int pos,pos1; 
        pos = binser_modif(0,n-1,bebek,x);
        pos1 = binser_modif(0,n-1,bebek,y);
        pos = pos1-pos;
        cout << pos << '\n';
    }
}