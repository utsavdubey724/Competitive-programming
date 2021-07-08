/*
Problem:    1232. Check If It Is a Straight Line
Date:       July 08, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/check-if-it-is-a-straight-line/

Question:
You are given an array coordinates, coordinates[i] = [x, y], where [x, y] represents the coordinate of a point. Check if these points make a straight line in the XY plane.

Example 1:

Input: coordinates = [[1,2],[2,3],[3,4],[4,5],[5,6],[6,7]]
Output: true

Example 2:
Input: coordinates = [[1,1],[2,2],[3,4],[4,5],[5,6],[7,7]]
Output: false
 
Constraints:
2 <= coordinates.length <= 1000
coordinates[i].length == 2
-10^4 <= coordinates[i][0], coordinates[i][1] <= 10^4
coordinates contains no duplicate point.
*/

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
        int n = c.size();
        int x0 = c[0][0],y0 = c[0][1], x1 = c[1][0], y1 = c[1][1];
        int dx = x1 - x0;          
        int dy = y1 - y0;
        for(int i=0;i<n;i++){
            int x = c[i][0];
            int y = c[i][1];
            if(dy * (x-x1) != dx * (y-y1))
                return false;
        }
        return true;
    }
};
