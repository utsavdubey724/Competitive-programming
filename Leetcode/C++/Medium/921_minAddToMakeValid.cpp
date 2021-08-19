/*
Problem:    921. Minimum Add to Make Parentheses Valid
Date:       July 18, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/

Question:
Given a string s of '(' and ')' parentheses, we add the minimum number of parentheses ( '(' or ')', and in any positions ) so that the resulting parentheses string is valid.

Formally, a parentheses string is valid if and only if:
It is the empty string, or
It can be written as AB (A concatenated with B), where A and B are valid strings, or
It can be written as (A), where A is a valid string.
Given a parentheses string, return the minimum number of parentheses we must add to make the resulting string valid.

Example 1:
Input: s = "())"
Output: 1

Example 2:
Input: s = "((("
Output: 3

Example 3:
Input: s = "()"
Output: 0

Example 4:
Input: s = "()))(("
Output: 4
 

Note:
s.length <= 1000
s only consists of '(' and ')' characters.
*/


class Solution {
public:
    int minAddToMakeValid(string s) {
        int count=0;
        int n=s.length();
        vector<char> v;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                v.push_back(s[i]);
            }
            else{
                if(v.empty()==true){
                    count++;
                }
                else if(v[v.size()-1]=='('){
                    v.pop_back();
                }
                else{
                    count++;
                    v.pop_back();
                }
            }
        }
        while(v.empty()==false){
            v.pop_back();
            count++;
        }
        return count;
    }
};
