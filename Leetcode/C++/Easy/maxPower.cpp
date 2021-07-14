/*
Problem:    1446. Consecutive Characters
Date:       July 14, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/consecutive-characters/

Question:
Given a string s, the power of the string is the maximum length of a non-empty substring that contains only one unique character.
Return the power of the string.

Example 1:
Input: s = "leetcode"
Output: 2
Explanation: The substring "ee" is of length 2 with the character 'e' only.

Example 2:
Input: s = "abbcccddddeeeeedcba"
Output: 5
Explanation: The substring "eeeee" is of length 5 with the character 'e' only.

Example 3:
Input: s = "triplepillooooow"
Output: 5

Example 4:
Input: s = "hooraaaaaaaaaaay"
Output: 11

Example 5:
Input: s = "tourist"
Output: 1
 

Constraints:
1 <= s.length <= 500
s contains only lowercase English letters.
*/


class Solution {
public:
    int maxPower(string s) {
        int max=1,curr=1,n=s.length();
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                curr++;
                if(curr>max)
                    max=curr;
            }
            else
                curr=1;
        }
        return max;
    }
};
