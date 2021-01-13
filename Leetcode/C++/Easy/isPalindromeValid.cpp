/*
Problem:    Valid Palindrome
Date:       Jan 13, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/valid-palindrome/

Question:
Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.
Note: For the purpose of this problem, we define empty string as valid palindrome.
Example 1:
Input: "A man, a plan, a canal: Panama"
Output: true

Example 2:
Input: "race a car"
Output: false
 

Constraints:
s consists only of printable ASCII characters.
*/


class Solution {
public:
    bool isPalindrome(string s) {
        int start=0,end=s.length()-1,flag=0;
        for(;start<end;start++,end--){
            while(isalnum(s[start])==0 && start<end)
                start++;
            while(isalnum(s[end])==0 && start<end)
                end--;
            if(start>end){
                flag=1;
                break;
            }
            if(tolower(s[start]) != tolower(s[end])){
                flag=1;
                break;
            }
        }
        if(flag)
            return false;
        return true;
    }
};
