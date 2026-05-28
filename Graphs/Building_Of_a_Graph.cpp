#include<bits/stdc++.h>
#include<list>
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
    void print_adj_list(){
        for (int i=0;i<V;i++){
            cout<<i<<":";
            for(int neigh:l[i]){
                cout<<" "<<neigh;
            }
            cout<<endl;
        }
    }
};
int main(){
    Graph g(5);
    g.add_edge(0,1);
    g.add_edge(1,2);
    g.add_edge(1,3);
    g.add_edge(3,4);
    g.add_edge(4,2);

    g.print_adj_list();
}
