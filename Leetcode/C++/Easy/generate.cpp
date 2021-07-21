/*
Problem:    118. Pascal's Triangle
Date:       July 21, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/pascals-triangle/

Question:
Given an integer numRows, return the first numRows of Pascal's triangle.
In Pascal's triangle, each number is the sum of the two numbers directly above it.

Example 1:
Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]

Example 2:
Input: numRows = 1
Output: [[1]]
 

Constraints:
1 <= numRows <= 30
*/


class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> v;
        v.push_back(1);
        ans.push_back(v);
        int prevSize=v.size();
        for(int i=1;i<numRows;i++){
            v.clear();
            v.push_back(1);
            for(int j=0;j<prevSize-1;j++){
                v.push_back(ans[i-1][j]+ans[i-1][j+1]);
            }
            v.push_back(1);                   
            prevSize=v.size();
            ans.push_back(v);
            /*for(int k=0;k<ans.size();k++){
                for(int l=0;l<ans[k].size();l++)
                    cout<<ans[k][l]<<" ";
                cout<<endl;
            }
            cout<<endl;*/
        }
        return ans;
    }
};
