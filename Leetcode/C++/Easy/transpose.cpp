/*
Problem:    867. Transpose Matrix
Date:       July 20, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/transpose-matrix/

Question:
Given a 2D integer array matrix, return the transpose of matrix.
The transpose of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices.

Example 1:
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[1,4,7],[2,5,8],[3,6,9]]

Example 2:
Input: matrix = [[1,2,3],[4,5,6]]
Output: [[1,4],[2,5],[3,6]]
 

Constraints
m == matrix.length
n == matrix[i].length
1 <= m, n <= 1000
1 <= m * n <= 10^5
-10^9 <= matrix[i][j] <= 10^9
*/


class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int row=matrix.size();
        int col=matrix[0].size();
        vector<vector<int>> ans (col, vector<int>(row));
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                ans[j][i]=matrix[i][j];
            }
        }
        return ans;
    }
};
