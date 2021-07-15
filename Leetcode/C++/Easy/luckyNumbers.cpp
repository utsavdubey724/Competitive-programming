/*
Problem:    1380. Lucky Numbers in a Matrix
Date:       July 15, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/lucky-numbers-in-a-matrix/

Question:
Given a m * n matrix of distinct numbers, return all lucky numbers in the matrix in any order.
A lucky number is an element of the matrix such that it is the minimum element in its row and maximum in its column.

Example 1:
Input: matrix = [[3,7,8],[9,11,13],[15,16,17]]
Output: [15]
Explanation: 15 is the only lucky number since it is the minimum in its row and the maximum in its column

Example 2:
Input: matrix = [[1,10,4,2],[9,3,8,7],[15,16,17,12]]
Output: [12]
Explanation: 12 is the only lucky number since it is the minimum in its row and the maximum in its column.

Example 3:
Input: matrix = [[7,8],[1,2]]
Output: [7]
 

Constraints:
m == mat.length
n == mat[i].length
1 <= n, m <= 50
1 <= matrix[i][j] <= 10^5.
All elements in the matrix are distinct.
*/


class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int row=matrix.size();
        int col=matrix[0].size();
        vector<int> ans;
        int rminIdx;
        for(int i=0;i<row;i++){
            int rmin=INT_MAX,cmax=INT_MIN;
            for(int j=0;j<col;j++){
                if(matrix[i][j]<rmin){
                    rmin=matrix[i][j];
                    rminIdx=j;
                }
            }
            for(int j=0;j<row;j++){
                if(matrix[j][rminIdx]>cmax){
                    cmax=matrix[j][rminIdx];
                }
            }
            if(rmin==cmax)
                ans.push_back(rmin);
        }
        return ans;
    }
};
