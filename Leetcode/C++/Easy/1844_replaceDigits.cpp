/*
Problem:    1844. Replace All Digits with Characters
Date:       July 12, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/replace-all-digits-with-characters/

Question:
You are given a 0-indexed string s that has lowercase English letters in its even indices and digits in its odd indices.
There is a function shift(c, x), where c is a character and x is a digit, that returns the xth character after c.
For example, shift('a', 5) = 'f' and shift('x', 0) = 'x'.
For every odd index i, you want to replace the digit s[i] with shift(s[i-1], s[i]).
Return s after replacing all digits. It is guaranteed that shift(s[i-1], s[i]) will never exceed 'z'.

Example 1:
Input: s = "a1c1e1"
Output: "abcdef"
Explanation: The digits are replaced as follows:
- s[1] -> shift('a',1) = 'b'
- s[3] -> shift('c',1) = 'd'
- s[5] -> shift('e',1) = 'f'

Example 2:
Input: s = "a1b2c3d4e"
Output: "abbdcfdhe"
Explanation: The digits are replaced as follows:
- s[1] -> shift('a',1) = 'b'
- s[3] -> shift('b',2) = 'd'
- s[5] -> shift('c',3) = 'f'
- s[7] -> shift('d',4) = 'h'
 

Constraints:
1 <= s.length <= 100
s consists only of lowercase English letters and digits.
shift(s[i-1], s[i]) <= 'z' for all odd indices i.
*/


class Solution {
public:
    string replaceDigits(string s) {      //Easier Solution
        for(int i=1;i<s.length();i+=2)
            s[i]=s[i-1]+(s[i]-'0');
        return s;
    }
    
    /*string replaceDigits(string s) {          //Another solution
        char carr[26];
        for(int i=0;i<26;i++)
            carr[i]='a'+i;
        for(int i=1;i<s.length();i+=2){
            char c=s[i-1];
            int d=s[i]-'0';
            cout<<c<<" "<<d;
            for(int j=0;;){
                if(c==carr[j]){
                    s[i]=carr[j+d];
                    break;
                }
                else
                    j++;
            }
        }
        return s;
    }*/
};
