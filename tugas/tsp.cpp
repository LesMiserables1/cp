// CPP program to implement traveling salesman 
// problem using naive approach. 
#include <bits/stdc++.h> 
using namespace std; 
using namespace std::chrono;   
// implementation of traveling Salesman Problem 
int travllingSalesmanProblem(int graph[1000][1000], int s,int n) 
{ 
    // store all vertex apart from source vertex 
    vector<int> vertex; 
    for (int i = 0; i < n; i++) 
        if (i != s) 
            vertex.push_back(i); 
  
    // store minimum weight Hamiltonian Cycle. 
    int min_path = INT_MAX; 
    do { 
  
        // store current Path weight(cost) 
        int current_pathweight = 0; 
          
        // compute current path weight 
        int k = s; 
        for (int i = 0; i < vertex.size(); i++) { 
            current_pathweight += graph[k][vertex[i]]; 
            k = vertex[i]; 
        } 
        current_pathweight += graph[k][s]; 
  
        // update minimum 
        min_path = min(min_path, current_pathweight); 
         
    } while (next_permutation(vertex.begin(), vertex.end())); 
  
    return min_path; 
} 
  
// driver program to test above function 
int main() 
{ 
    int n;
    // matrix representation of graph 
    int graph[1000][1000];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            int rands = rand() % 1000;
            graph[i][j] = rands;
        }
    }
    int s = 0; 
    auto time = high_resolution_clock::now();
    cout << travllingSalesmanProblem(graph, s,n) << endl;
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - time ); 
    cout << duration.count()<<endl;

    return 0; 
}