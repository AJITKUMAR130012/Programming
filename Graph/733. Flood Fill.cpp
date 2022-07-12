Problem Description: https://leetcode.com/problTime Complexity: o(m*n)ms/flood-fill/
Time Complexity: o(m*n)
space complexity: o(m*n)   -- by function call and by taking visited array

class Solution {
public:
    void fun(vector<vector<int>> &image,int i,int j,int r,int c,int cl,int color,vector<vector<bool>> &vis)
    {
        if(i-1>=0 and image[i-1][j]==cl and !vis[i-1][j])
        {
            vis[i-1][j]=true;
            image[i-1][j]=color;
            fun(image,i-1,j,r,c,cl,color,vis);
        }
        if(j-1>=0 and image[i][j-1]==cl and !vis[i][j-1])
        {
            vis[i][j-1]=true;
            image[i][j-1]=color;
            fun(image,i,j-1,r,c,cl,color,vis);
        }
        if(i+1<r and image[i+1][j]==cl and !vis[i+1][j])
        {
            vis[i+1][j]=true;
            image[i+1][j]=color;
            fun(image,i+1,j,r,c,cl,color,vis);
        }
        if(j+1<c and image[i][j+1]==cl and !vis[i][j+1])
        {
            vis[i][j+1]=true;
            image[i][j+1]=color;
            fun(image,i,j+1,r,c,cl,color,vis);
        }
        return;
    }
    
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        int cl=image[sr][sc];
        int r=image.size();
        int c=image[0].size();
        vector<vector<bool>> vis(r,vector<bool> (c,false));
        image[sr][sc]=color;
        vis[sr][sc]=false;
        fun(image,sr,sc,r,c,cl,color,vis);
        return image;
    }
};
