
/*
Problem:    Find N Unique Integers Sum up to Zero
Date:       Jan 7, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/

Question:
Given an integer n, return any array containing n unique integers such that they add up to 0.

Example 1:
Input: n = 5
Output: [-7,-1,1,3,4]
Explanation: These arrays also are accepted [-5,-1,1,2,3] , [-3,-1,2,-2,4].

Example 2:
Input: n = 3
Output: [-1,0,1]

Example 3:
Input: n = 1
Output: [0]
 
Constraints:
1 <= n <= 1000
*/

class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        int neg=-1,pos=1;
        for(int i=0;i<n/2;i++){
            ans.push_back(neg--);
            ans.push_back(pos++);
        }
        if(n%2!=0)
            ans.push_back(0);
        return ans;
    }
};
