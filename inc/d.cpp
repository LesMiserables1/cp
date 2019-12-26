#include <iostream>
#include <vector>
#include <queue>
#include <functional>
#include <utility>

using namespace std;
const int MAX = 1e4 + 5;
typedef pair<bool, int> PII;
bool marked[MAX];
vector <PII> adj[MAX];

bool prim(int x,int y)
{
    priority_queue<PII, vector<PII>, greater<PII> > Q;
    int y;
    long long minimumCost = 0;
    PII p;
    Q.push(make_pair(0, x));
    for(int i = 0;i < adj[x].size();++i){
        if(!adj[x][i].first)
            Q.push(adj[x][i]);
    }
    return minimumCost;
}

int main()
{
    int nodes, edges, x, y,q;
    long long weight, minimumCost;
    cin >> nodes >> edges >> q;
    for(int i = 0;i < edges;++i)
    {
        cin >> x >> y;
        adj[x].push_back(make_pair(0, y));
        adj[y].push_back(make_pair(0, x));
    }
    for (int i = 0; i < q; i++)
    {
        cin >> x >> y;
        minimumCost = prim(x,y);
    }
    
    cout << minimumCost << endl;
    return 0;
}