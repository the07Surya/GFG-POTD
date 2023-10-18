class Solution
{
    static int count = 0;
    public int findMaxArea(int[][] grid)
    {
        
        int max = 0;
       int N = grid.length, M = grid[0].length;
        int[][] visited = new int[N][M];
        for(int i = 0;i<grid.length;i++){
            for(int j = 0;j<grid[0].length;j++){
                if(grid[i][j] == 1){
                    dfs(grid,i,j,visited);
                    max = Math.max(max,count);
                    count = 0;
                }
            }
        }
        
        return max;
    }
    
    public static void dfs(int[][] grid,int i,int j,int[][] visited){
         visited[i][j] = 1;
        count++;
        int  N = grid.length, M = grid[0].length;
        int [] delRow = {-1, -1, -1, 0, 1, 1, 1, 0 };
        int [] delCol = {-1, 0, 1, 1, 1, 0, -1, -1 };
        int NRow =0, NCol = 0;
        for(int k=0; k<8; k++){
            NRow = delRow[k] + i;
            NCol = delCol[k] + j;
            if(NRow >= 0 && NRow < N && NCol >=0 && NCol < M 
            && visited[NRow][NCol] == 0 && grid[NRow][NCol] == 1){
                dfs(grid, i+delRow[k], j + delCol[k],visited);
            }
        }
    }
}
