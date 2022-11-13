// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

// Graph Representation for Undirected graph
// Example Graph: 0 - 1 - 3
//                 \ /
//                  2
// Output of this program:
// 1 2 
// 0 2 3 
// 0 1 
// 1 
void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void printGraph(vector<int> adj[], int v){
    for(int i=0;i<v;i++){
        for(int x: adj[i])
            cout<<x<<' ';
        cout<<"\n";
    }
}
int main() {
    int v = 4;
    vector<int> adj[v];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,2);
    addEdge(adj,1,3);
    printGraph(adj,v);
    return 0;
}

