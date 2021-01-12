/*
Problem:    Palindrome Number
Date:       Jan 12, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/palindrome-number/

Question:
Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.
Follow up: Could you solve it without converting the integer to a string?

Example 1:
Input: x = 121
Output: true

Example 2:
Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

Example 3:
Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

Example 4:
Input: x = -101
Output: false
 

Constraints:
-2^31 <= x <= 2^31 - 1
*/


class Solution {
public:
    bool isPalindrome(int x) {
        long rev=0,temp=x;
        while(temp>0){
            rev=rev*10+temp%10;
            temp/=10;
        }
        return rev==x;
    }
    /*bool isPalindrome(int x) {
        string xstr=to_string(x);
        for(int i=0,j=xstr.length()-1;i<j;i++,j--)
            if(xstr[i]!=xstr[j])
                return false;
        return true;
    }*/
};
