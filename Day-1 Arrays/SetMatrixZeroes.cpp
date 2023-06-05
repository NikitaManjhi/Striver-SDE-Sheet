// Leetcode 73. Set Matrix Zeroes
//Link -> https://leetcode.com/problems/set-matrix-zeroes/description/
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int i,j;
        int row=matrix.size();
        int col=matrix[0].size();
        set<int> row_set;
        set<int> col_set;
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(matrix[i][j]==0)
                {   
                    row_set.insert(i);
                    col_set.insert(j);
                }  
            }
        }
        
        for(auto i:row_set)
        { 
            for(j=0;j<col;j++)
            {
                matrix[i][j]=0;
            }
        }
        
        for(i=0;i<row;i++)
        {
            for(auto j:col_set)
            {
                matrix[i][j]=0;
            }
        }   
    }
};
