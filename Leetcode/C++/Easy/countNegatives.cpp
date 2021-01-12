/*
Problem:    Generate a String With Characters That Have Odd Counts
Date:       Jan 12, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/generate-a-string-with-characters-that-have-odd-counts/

Question:
Given a m x n matrix grid which is sorted in non-increasing order both row-wise and column-wise, return the number of negative numbers in grid.

Example 1:
Input: grid = [[4,3,2,-1],[3,2,1,-1],[1,1,-1,-2],[-1,-1,-2,-3]]
Output: 8
Explanation: There are 8 negatives number in the matrix.

Example 2:
Input: grid = [[3,2],[1,0]]
Output: 0

Example 3:
Input: grid = [[1,-1],[-1,-1]]
Output: 3

Example 4:
Input: grid = [[-1]]
Output: 1
 

Constraints:
m == grid.length
n == grid[i].length
1 <= m, n <= 100
-100 <= grid[i][j] <= 100
 
Follow up: Could you find an O(n + m) solution?
*/


class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {     //O(n+m)
        int count=0;
        int row=grid.size();
        int col=grid[0].size();
        int i=row-1;
        int j=0;
        while(i>=0 && j<col){
            if(grid[i][j]<0){
                count+=col-j;
                i-=1;
            }
            else
                j+=1;
        }
        return count;
    }
    /*int countNegatives(vector<vector<int>>& grid) {   //O(nm)
        int count=0;
        int row=grid.size();
        int col=grid[0].size();
        for(int i=row-1;i>=0;i--){
            for(int j=col-1;j>=0;j--){
                if(grid[i][j]<0)
                    count++;
                else
                    break;
            }
        }
        return count;
    }*/
};
