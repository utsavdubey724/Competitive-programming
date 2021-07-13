/*
Problem:    1556. Thousand Separator
Date:       July 14, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/thousand-separator/

Question:
Given an integer n, add a dot (".") as the thousands separator and return it in string format.

Example 1:
Input: n = 987
Output: "987"

Example 2:
Input: n = 1234
Output: "1.234"

Example 3:
Input: n = 123456789
Output: "123.456.789"

Example 4:
Input: n = 0
Output: "0"
 

Constraints:
0 <= n < 2^31
*/


class Solution {
public:
    string thousandSeparator(int n) {
        string s=to_string(n);
        string ans;
        int flag=0;
        for(int i=s.length()-1;i>=0;i--){
            ans+=s[i];
            flag++;
            if(flag==3 && i!=0){
                ans+='.';
                flag=0;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
