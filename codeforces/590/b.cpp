#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define loop(i,a,b) for(int i = a;i < b; i++)
#define mp make_pair

int main(){
    int n,k,psn;
    /*
    deque<int> msg;
    
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    cin >> n >> k;
    for(int i = 0; i < n;i++){
        cin >> psn;
        bool status = find(msg.begin(),msg.end(),psn) == msg.end();
        if(msg.size() < k && status)
            msg.push_front(psn);
        else{
            if(status){
                msg.pop_back();
                msg.push_front(psn);
            }
        }
    }
    cout << msg.size() << "\n";
    for(auto i = msg.begin(); i != msg.end();i++)
    cout << *i << " ";
    cout << endl;
    */
    set<int> msg;
    deque<int> hp;
    cin >> n >> k;
    loop(i,0,n){
        cin >> psn;
        if(!msg.count(psn)){
            if(hp.size() >= k){
                int front = hp.back();
                hp.pop_back();
                msg.erase(front);
            }
            msg.insert(psn);
            hp.push_front(psn);
        }
    }
    for(auto i = hp.begin(); i != hp.end() ;i++)
        cout << *i << " ";
    cout << endl;
}