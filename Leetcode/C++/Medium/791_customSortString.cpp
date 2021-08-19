/*
Problem:    791. Custom Sort String
Date:       August 19, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Medium
Source:     https://leetcode.com/problems/custom-sort-string/

Question:
You are given two strings order and s. All the words of order are unique and were sorted in some custom order previously.

Permute the characters of s so that they match the order that order was sorted. More specifically, if a character x occurs before a character y in order, then x should 
occur before y in the permuted string.

Return any permutation of s that satisfies this property.


Example 1:
Input: order = "cba", s = "abcd"
Output: "cbad"
Explanation: 
"a", "b", "c" appear in order, so the order of "a", "b", "c" should be "c", "b", and "a". 
Since "d" does not appear in order, it can be at any position in the returned string. "dcba", "cdba", "cbda" are also valid outputs.

Example 2:
Input: order = "cbafg", s = "abcd"
Output: "cbad"
 

Constraints:
1 <= order.length <= 26
1 <= s.length <= 200
order and s consist of lowercase English letters.
All the characters of order are unique.
*/


class Solution {
public:
    string customSortString(string order, string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        string res;
        int n = s.size();
        vector<int> sFreq(26);
        for(int i=0;i<n;i++){
            sFreq[s[i]-'a']++;
        }
        
        char current;
        for(int i=0;i<order.size();i++){    //Sorted s excluding characters not present in order
            current = order[i];
            while(sFreq[current-'a']){
                sFreq[current-'a']--;
                res += current;
            }
        }
        
        for(int i=0;i<26;i++){              //Adding remaining characters
            while(sFreq[i]){
                current = i+'a';
                res += current;
                sFreq[i]--;
            }
        }
        
        return res;
    }
};
