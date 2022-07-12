Problem Description: https://leetcode.com/problems/flood-fill/
Time Complexity: o(n*m)
Space Complexity: o(n*m)
  
  class Solution {
public:
    void fun(vector<vector<int>> &image,int i,int j,int r,int c,int cl,int color,vector<vector<bool>> &vis)
    {
        if(i<0 or i>=r or j<0 or j>=c or vis[i][j] or image[i][j]!=cl) return;
        image[i][j]=color;
        vis[i][j]=true;
        fun(image,i,j-1,r,c,cl,color,vis);
        fun(image,i,j+1,r,c,cl,color,vis);
        fun(image,i-1,j,r,c,cl,color,vis);
        fun(image,i+1,j,r,c,cl,color,vis);
    }
    
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        int cl=image[sr][sc];
        int r=image.size();
        int c=image[0].size();
        vector<vector<bool>> vis(r,vector<bool> (c,false));
        fun(image,sr,sc,r,c,cl,color,vis);
        return image;
    }
};
