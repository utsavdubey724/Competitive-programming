/*
Problem:    917. Reverse Only Letters
Date:       July 17, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/reverse-only-letters/

Question:
Given a string s, return the "reversed" string where all characters that are not a letter stay in the same place, and all letters reverse their positions.

Example 1:
Input: s = "ab-cd"
Output: "dc-ba"

Example 2:
Input: s = "a-bC-dEf-ghIj"
Output: "j-Ih-gfE-dCba"

Example 3:
Input: s = "Test1ng-Leet=code-Q!"
Output: "Qedo1ct-eeLg=ntse-T!"
 

Note:
s.length <= 100
33 <= s[i].ASCIIcode <= 122 
s doesn't contain \ or "
*/


class Solution {
public:
    string reverseOnlyLetters(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int n=s.length();
        char temp;
        for(int i=0,j=n-1;i<j;){
            if(isalpha(s[i]) && isalpha(s[j])){
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
                i++;
                j--;
            }
            else if(isalpha(s[i]))
                j--;
            else
                i++;
        }
        return s;
    }
};
