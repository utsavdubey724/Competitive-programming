/*
Problem:    1550. Three Consecutive Odds
Date:       July 14, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/three-consecutive-odds/submissions/

Question:
Given an integer array arr, return true if there are three consecutive odd numbers in the array. Otherwise, return false.

Example 1:
Input: arr = [2,6,4,1]
Output: false
Explanation: There are no three consecutive odds.

Example 2:
Input: arr = [1,2,34,3,4,5,7,23,12]
Output: true
Explanation: [5,7,23] are three consecutive odds.
 

Constraints:
1 <= arr.length <= 1000
1 <= arr[i] <= 1000
*/


class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int n=arr.size();
        if(n<3)
            return false;
        int count=0,flag=0;
        for(int i=0;i<n;i++){
            if(arr[i]%2 != 0)
                count++;
            else
                count=0;
            if(count==3){
                flag=1;
                break;
            }         
        }
        if(flag)
            return true;
        return false;
    }
};
