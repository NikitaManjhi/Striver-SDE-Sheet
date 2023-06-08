//Leetcode 118. Pascal's Triangle
//Link -> https://leetcode.com/problems/pascals-triangle/description/
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pt(numRows);
        for(int i=0;i<numRows;i++)
        {   
            //resizes the element of 2d vector and appends 0 in last.
            pt[i].resize(i+1,1);    //initialize elements by 1.
            // pt[i][0]=pt[i][i]=1;
            for(int j=1;j<i;j++)
            {
                    pt[i][j]=pt[i-1][j-1]+pt[i-1][j];  
            }
        }
        return pt;
    }
};
