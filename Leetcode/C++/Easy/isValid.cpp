/*
Problem:    20. Valid Parentheses
Date:       July 17, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/valid-parentheses/

Question:
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
An input string is valid if:
Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
 
Example 1:
Input: s = "()"
Output: true

Example 2:
Input: s = "()[]{}"
Output: true

Example 3:
Input: s = "(]"
Output: false

Example 4:
Input: s = "([)]"
Output: false

Example 5:
Input: s = "{[]}"
Output: true
 

Constraints:
1 <= s.length <= 104
s consists of parentheses only '()[]{}'.
*/


class Solution {
public:
    bool isValid(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int n=s.length();
        vector<char> v;
        int flag=1;
        for(int i=0;i<n;i++){
            if(s[i]=='('|| s[i]=='['|| s[i]=='{'){ 
                v.push_back(s[i]);
            }
            else{
                if(v.empty()==false){
                    if(s[i]==')' && v[v.size()-1] =='(')
                    v.pop_back();
                    else if(s[i]==']' && v[v.size()-1] =='[')
                        v.pop_back();
                    else if(s[i]=='}' && v[v.size()-1] =='{')
                        v.pop_back();
                    else{
                        flag=0;
                        break;
                    }
                }
                else{
                    flag=0;
                    break;
                }
            }
        }
        if(v.empty()==false)
            return false;
        if(flag)
            return true;
        return false;
    }
};
