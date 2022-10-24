#include<bits/stdc++.h>
using namespace std;
template <typename T>
class Graph
{
   public:
   unordered_map<T,list<T>> adj;
   void addedge(T u,T v,bool dire){
      //! 0-->undirected
      //! 1-->directed
      adj[u].push_back(v);

      if(dire==0){
      adj[v].push_back(u);
      }
      
   }
   void printAdjlist()
      {

         for (auto i:adj)
         {
            cout<<i.first<<" -> ";
            for (auto j:i.second)
            {
               cout<<j<<",";
            }
            cout<<endl;
         }
         
      }
};


int main(){
   int n,m;
   cin>>n>>m;
   Graph<int> g1; 
   for (int i = 0; i < m; i++)
   {
      int u,v;
      cin>>u>>v;

      g1.addedge(u,v,0);
   }
   g1.printAdjlist();
}
