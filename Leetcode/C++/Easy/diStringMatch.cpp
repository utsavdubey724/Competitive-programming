/*
Problem:    942. DI String Match
Date:       July 27, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/di-string-match/

Question:
A permutation perm of n + 1 integers of all the integers in the range [0, n] can be represented as a string s of length n where:
s[i] == 'I' if perm[i] < perm[i + 1], and
s[i] == 'D' if perm[i] > perm[i + 1].
Given a string s, reconstruct the permutation perm and return it. If there are multiple valid permutations perm, return any of them.

 
Example 1:
Input: s = "IDID"
Output: [0,4,1,3,2]

Example 2:
Input: s = "III"
Output: [0,1,2,3]

Example 3:
Input: s = "DDI"
Output: [3,2,0,1]
 

Constraints:
1 <= s.length <= 10^5
s[i] is either 'I' or 'D'.
*/


class Solution {
public:
    vector<int> diStringMatch(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int n=s.length();
        int mini=0,maxi=n;
        vector<int> v(n+1);
        for(int i=0;i<n;i++){
            if(s[i]=='I'){
                v[i]=mini++;
            }
            else{
                v[i]=maxi--;
            }
        }
        v[n]=mini;
        return v;
    }
};
