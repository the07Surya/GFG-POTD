class Solution {
  public:
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
            vector<int>sol;
     vector<int>adjrev[V];
     // reverse and apply topological sort
       int indegree[V]={0};
       for(int i=0;i<V;i++){
           for(auto it:adj[i]){
               adjrev[it].push_back(i);
               indegree[i]++;
           }
       }
        queue<int>q;
        for(int i=0;i<V;i++){
            if(indegree[i]==0) q.push(i);
        }
        while(!q.empty()){
            int node=q.front();
            q.pop();
            sol.push_back(node);
            for(auto it:adjrev[node]){
                indegree[it]--;
                if(indegree[it]==0)q.push(it);
            }
        }
        sort(sol.begin(),sol.end());
        return sol;
    }
};
