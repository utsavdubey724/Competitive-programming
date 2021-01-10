
/*
Problem:    To Lower Case
Date:       Jan 10, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/to-lower-case/submissions/

Question:
Implement function ToLowerCase() that has a string parameter str, and returns the same string in lowercase.
Example 1:
Input: "Hello"
Output: "hello"

Example 2:
Input: "here"
Output: "here"

Example 3:
Input: "LOVELY"
Output: "lovely"
*/


class Solution {
public:
    string toLowerCase(string str) {
        for(int i=0;i<str.length();i++){
            if(str[i]>=65 && str[i]<=90)
                str[i]+=32;
        }
        return str;
    }    
    /*string toLowerCase(string str) {
        for(int i=0;i<str.length();i++){
            str[i]=tolower(str[i]);
        }
        return str;
    }*/
};
