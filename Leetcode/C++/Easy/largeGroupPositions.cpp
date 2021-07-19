/*
Problem:    830. Positions of Large Groups
Date:       July 19, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/positions-of-large-groups/

Question:
In a string s of lowercase letters, these letters form consecutive groups of the same character.
For example, a string like s = "abbxxxxzyy" has the groups "a", "bb", "xxxx", "z", and "yy".
A group is identified by an interval [start, end], where start and end denote the start and end indices (inclusive) of the group.
In the above example,"xxxx" has the interval [3,6].

A group is considered large if it has 3 or more characters.
Return the intervals of every large group sorted in increasing order by start index.

Example 1:
Input: s = "abbxxxxzzy"
Output: [[3,6]]
Explanation: "xxxx" is the only large group with start index 3 and end index 6.

Example 2:
Input: s = "abc"
Output: []
Explanation: We have groups "a", "b", and "c", none of which are large groups.

Example 3:
Input: s = "abcdddeeeeaabbbcd"
Output: [[3,5],[6,9],[12,14]]
Explanation: The large groups are "ddd", "eeee", and "bbb".

Example 4:
Input: s = "aba"
Output: []
 

Constraints:
1 <= s.length <= 1000
s contains lower-case English letters only.
*/


class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int n=s.length();
        vector<vector<int>> ans;
        vector<int> v;
        char c;
        for(int i=0,j=0;i<n;){
            c=s[i];
            while(1){
                j++;
                if(j>=n)
                    break;
                if(s[j]==c)
                    continue;
                else
                    break;
            }
            j--;
            if(j-i>=2){
                v.push_back(i);
                v.push_back(j);
                ans.push_back(v);
            }
            v.clear();
            i=j+1;
            j=i;
        }
        return ans;
    }
};
