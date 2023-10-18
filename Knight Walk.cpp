int minStepToReachTarget(vector<int>&KnightPos, vector<int>&TargetPos, int N){
        // Code here
        int drow[8]={-2,-2,-1,+1,+2,+2,-1,+1};
        int dcol[8]={-1,+1,+2,+2,+1,-1,-2,-2};
        queue<pair<pair<int,int>,int>> q;
        //{{row,col},time}
        vector<vector<bool>> vis(N+1,vector<bool>(N+1));
        q.push({{KnightPos[0]-1,KnightPos[1]-1},0});
        int tarx=TargetPos[0]-1;
        int tary=TargetPos[1]-1;
        int mx=0;
        while(!q.empty()){
            // r m* w a*
            int x=q.front().first.first;
            int y=q.front().first.second;
            int t=q.front().second;
            q.pop();
            mx=max(mx,t);  
            vis[x][y]=true;
            if(x==tarx and y==tary)
            return mx;
            for(int k=0;k<8;k++){
                int nrow=x+drow[k];
                int ncol=y+dcol[k];
                if(nrow<0 or ncol<0 or nrow>=N or ncol>=N or vis[nrow][ncol]){
                    continue;
                }
               vis[nrow][ncol]=true;
                q.push({{nrow,ncol},t+1});
            }
            
        }
        return -1;
    }
