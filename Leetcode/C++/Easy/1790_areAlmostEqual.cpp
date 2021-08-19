/*
Problem:    1790. Check if One String Swap Can Make Strings Equal
Date:       August 04, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal/

Question:
You are given two strings s1 and s2 of equal length. A string swap is an operation where you choose two indices in a string (not necessarily different) and swap the characters 
at these indices.

Return true if it is possible to make both strings equal by performing at most one string swap on exactly one of the strings. Otherwise, return false.

Example 1:
Input: s1 = "bank", s2 = "kanb"
Output: true
Explanation: For example, swap the first character with the last character of s2 to make "bank".

Example 2:
Input: s1 = "attack", s2 = "defend"
Output: false
Explanation: It is impossible to make them equal with one string swap.

Example 3:
Input: s1 = "kelb", s2 = "kelb"
Output: true
Explanation: The two strings are already equal, so no string swap operation is required.

Example 4:
Input: s1 = "abcd", s2 = "dcba"
Output: false
 

Constraints:
1 <= s1.length, s2.length <= 100
s1.length == s2.length
s1 and s2 consist of only lowercase English letters.
*/


class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n=s1.size();
        int flag=0;
        for(int i=0;i<n;i++){
            if(s1[i]==s2[i])
                continue;
            else{
                for(int j=i+1;j<n;j++){
                    if(s1[j]!=s2[j]){
                        int temp=s2[i];
                        s2[i]=s2[j];
                        s2[j]=temp;
                        flag=1;
                        break;
                    }
                }
            }
            if(flag)
                break;
        }
        return s1==s2;
    }
};
