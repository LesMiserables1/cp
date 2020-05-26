#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> kupon;
    int n,kupon_dicari;
    int kupons;

    scanf("%d %d",&n,&kupon_dicari);
    kupon.push_back(kupon_dicari);
    
    for(int i = 0; i < n; i++){
        scanf("%d",&kupons);
        kupon.push_back(kupons);
    }    
    sort(kupon.begin(),kupon.end());

    int min = INT_MAX;
    int x;
    for (int i = 0; i < kupon.size();i++){
        if (kupon_dicari != kupon[i]){
            int diff = abs(kupon_dicari - kupon[i]);
            if (diff < min){
                min = diff;
                x = i;
            }
        }
    }
    printf ("%d\n",kupon[x]);
}