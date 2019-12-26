#include<bits/stdc++.h>
using namespace std;

#define pb push_back
const int N = 1e+3 + 3;

double harga[N];
double berat[N];

int main(){
    int n;
    double hasil = 0,limit;
    vector <pair<double, int>> data; 
    cin >> n >> limit;
    for (int i = 0; i < n; i++){
        cin >> berat[i];
    }
    for (int i = 0; i < n; i++){
        cin >> harga[i];
    }
    for (int i = 0; i < n; i++){
        double rate = harga[i]/berat[i];
        data.pb(make_pair(rate,berat[i]));
    }
    sort(data.begin(),data.end());
    for (int i = n-1;i >= 0; i--){
        if(limit > 0){
            if(limit < data[i].second)
                data[i].second = limit;
            hasil += data[i].second * data[i].first;
            limit -= data[i].second;
        }else
            break;
    }
    cout <<fixed << setprecision(5)<< hasil << endl;
    
    return 0;
}