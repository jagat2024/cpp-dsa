#include<bits/stdc++.h>
#include<list>
#include<stack>
using namespace std;
class Graph{
    int V;
    list<int> *l;
    public:
    Graph(int V){
        this->V=V;
        l=new list<int> [V];
    }
    void add_edge(int u, int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }
    void print_adj_list(){
        for (int i=0;i<V;i++){
            cout<<i<<":";
            for(int neigh:l[i]){
                cout<<" "<<neigh;
            }
            cout<<endl;
        }
    }
    void dfs_helper(int src,vector<bool> &visited){
        cout<<src<<" ";    
        visited[src]=true;
        for(int des: l[src]){
            if(!visited[des]){
                dfs_helper(des,visited);
            }
        }

    }
    void DFS(){
        int src=0;
        vector<bool> visited(V,false);
        dfs_helper(src,visited);
    }
};
int main(){
    Graph g(5);
    g.add_edge(0,1);
    g.add_edge(1,2);
    g.add_edge(2,4);
    g.add_edge(1,3);
    g.print_adj_list();
    g.DFS();

}
