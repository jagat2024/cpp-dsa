#include<bits/stdc++.h>
#include<list>
#include<queue>
using namespace std;
class   Graph{
    int V;
    list<int> *l;
    public:
    Graph(int V){
        this->V =V;
        l=new list<int> [V];
    }
    void add_edge(int u ,int v){
        l[u].push_back (v) ;
        l[v].push_back(u);
    }
    void bfs(){
        queue<int> Q;
        vector<bool> visited(V,false);
        Q.push(0);
        visited[0]=true;
        while(Q.size()>0){
            int u= Q.front();
            Q.pop();
            cout<<u<<" ";
            for(int v: l[u]){
                if(!visited[v]){
                    visited[v]=true;
                    Q.push(v);
                }
            }
        }
        cout<<endl;

    }
};
int main(){
    Graph g(5);
    g.add_edge(0,1);
    g.add_edge(1,2);
    g.add_edge(1,3);
    g.add_edge(3,4);
    g.add_edge(4,2);

    g.bfs();
}
