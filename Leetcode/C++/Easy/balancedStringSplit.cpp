/*
Problem:    1221. Split a String in Balanced Strings
Date:       August 18, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/split-a-string-in-balanced-strings/

Question:
Balanced strings are those that have an equal quantity of 'L' and 'R' characters.
Given a balanced string s, split it in the maximum amount of balanced strings.
Return the maximum amount of split balanced strings.


Example 1:
Input: s = "RLRRLLRLRL"
Output: 4
Explanation: s can be split into "RL", "RRLL", "RL", "RL", each substring contains same number of 'L' and 'R'.

Example 2:
Input: s = "RLLLLRRRLR"
Output: 3
Explanation: s can be split into "RL", "LLLRRR", "LR", each substring contains same number of 'L' and 'R'.

Example 3:
Input: s = "LLLLRRRR"
Output: 1
Explanation: s can be split into "LLLLRRRR".

Example 4:
Input: s = "RLRRRLLRLL"
Output: 2
Explanation: s can be split into "RL", "RRRLLRLL", since each substring contains an equal number of 'L' and 'R'
 

Constraints:
1 <= s.length <= 1000
s[i] is either 'L' or 'R'.
s is a balanced string.
*/


class Solution {
public:
    int balancedStringSplit(string s) {
        int n = s.size();
        int res = 0;
        int lcount=0,rcount=0;
        for(int i=0;i<n;i++){
            if(s[i]=='L')
                lcount++;
            else
                rcount++;
            if(lcount == rcount){
                res++;
                lcount=0;
                rcount=0;
            }
        }
        return res;
    }
};
