/*
Problem:    28. Implement strStr()
Date:       July 10, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/implement-strstr/

Question:
Implement strStr().
Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

Clarification:
What should we return when needle is an empty string? This is a great question to ask during an interview.
For the purpose of this problem, we will return 0 when needle is an empty string. This is consistent to C's strstr() and Java's indexOf().

Example 1:
Input: haystack = "hello", needle = "ll"
Output: 2

Example 2:
Input: haystack = "aaaaa", needle = "bba"
Output: -1

Example 3:
Input: haystack = "", needle = ""
Output: 0
 
Constraints:
0 <= haystack.length, needle.length <= 5 * 10^4
haystack and needle consist of only lower-case English characters.
Accepted
*/


class Solution {
public:
    int strStr(string haystack, string needle) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        if(needle=="")
            return 0;
        int found = haystack.find(needle);
        if (found != string::npos)
            return found;
        return -1;
    }
};
