/*
Problem:    1893. Check if All the Integers in a Range Are Covered
Date:       July 19, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/check-if-all-the-integers-in-a-range-are-covered/

Question:
You are given a 2D integer array ranges and two integers left and right. Each ranges[i] = [starti, endi] represents an inclusive interval between starti and endi.
Return true if each integer in the inclusive range [left, right] is covered by at least one interval in ranges. Return false otherwise.
An integer x is covered by an interval ranges[i] = [starti, endi] if starti <= x <= endi.

Example 1:
Input: ranges = [[1,2],[3,4],[5,6]], left = 2, right = 5
Output: true
Explanation: Every integer between 2 and 5 is covered:
- 2 is covered by the first range.
- 3 and 4 are covered by the second range.
- 5 is covered by the third range.

Example 2:
Input: ranges = [[1,10],[10,20]], left = 21, right = 21
Output: false
Explanation: 21 is not covered by any range.
 

Constraints:
1 <= ranges.length <= 50
1 <= starti <= endi <= 50
1 <= left <= right <= 50
*/


class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int flag=1;
        int row=ranges.size();
        vector<int> v;
        int start,end;
        for(int i=0;i<row;i++){
            for(int j=0;j<2;j++){
                start=ranges[i][0];
                end=ranges[i][1];
                while(start<=end){
                    v.push_back(start);
                    start++;
                }
            }
        }
        sort(v.begin(),v.end());
        //for(int i=0;i<v.size();i++)
        //    cout<<v[i]<<"  ";
        while(left<=right){
            bool found=binary_search(v.begin(),v.end(),left);
            if(found==false){
                flag=0;
                break;
            }
            left++;
        }
        if(flag)
            return true;
        return false;
    }
};
