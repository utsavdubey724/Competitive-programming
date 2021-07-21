/*
Problem:    119. Pascal's Triangle II
Date:       July 21, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/pascals-triangle-ii/

Question:
Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.
In Pascal's triangle, each number is the sum of the two numbers directly above it.

Example 1:
Input: rowIndex = 3
Output: [1,3,3,1]

Example 2:
Input: rowIndex = 0
Output: [1]

Example 3:
Input: rowIndex = 1
Output: [1,1]
 

Constraints:
0 <= rowIndex <= 33
 
Follow up: Could you optimize your algorithm to use only O(rowIndex) extra space?
*/


class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> pascal;
        vector<int> v;
        v.push_back(1);
        int prevSize=v.size();
        pascal.push_back(v);
        for(int i=1;i<=rowIndex;i++){
            v.clear();
            v.push_back(1);
            for(int j=0;j<prevSize-1;j++){
                v.push_back(pascal[i-1][j]+pascal[i-1][j+1]);
            }
            v.push_back(1);
            prevSize=v.size();
            pascal.push_back(v);
        }
        /*for(int i=0;i<pascal.size();i++){
            for(int j=0;j<pascal[i].size();j++)
                cout<<pascal[i][j]<<" ";
            cout<<endl;
        }*/
        return v;
    }
};
