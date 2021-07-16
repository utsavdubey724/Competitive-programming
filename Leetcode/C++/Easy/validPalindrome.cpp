/*
Problem:    680. Valid Palindrome II
Date:       July 17, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/valid-palindrome-ii/

Question:
Given a string s, return true if the s can be palindrome after deleting at most one character from it.

Example 1:
Input: s = "aba"
Output: true

Example 2:
Input: s = "abca"
Output: true
Explanation: You could delete the character 'c'.

Example 3:
Input: s = "abc"
Output: false
 

Constraints:
1 <= s.length <= 105
s consists of lowercase English letters.
*/


class Solution {
public:
    bool validPalindrome(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int n=s.length();
        int left,right;
        int flag1=1;
        for(int i=0,j=n-1;i<j;){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            if(s[i]!=s[j]){
                left=i;
                right=j;
                flag1=0;
                break;
            }
        }
        //cout<<left<<" "<<right<<endl;
        if(flag1)
            return true;
        int flag;
        int repeat=2;
        while(repeat--){
            string temp=s;
            if(repeat==1)
                temp.erase(left,1);
            else
                temp.erase(right,1);
            //cout<<temp<<endl;
            flag=1;
            for(int i=0,j=n-2;i<j;i++,j--){
                if(temp[i]!=temp[j]){
                    flag=0;
                    break;
                }
            }
            if(flag)
                break;
        }
        if(flag)
            return true;
        return false;
    }
};
