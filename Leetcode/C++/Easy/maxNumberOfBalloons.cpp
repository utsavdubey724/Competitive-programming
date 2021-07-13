/*
Problem:    1189. Maximum Number of Balloons
Date:       July 14, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/maximum-number-of-balloons/

Question:
Given a string text, you want to use the characters of text to form as many instances of the word "balloon" as possible.
You can use each character in text at most once. Return the maximum number of instances that can be formed.

Example 1:
Input: text = "nlaebolko"
Output: 1

Example 2:
Input: text = "loonbalxballpoon"
Output: 2

Example 3:
Input: text = "leetcode"
Output: 0
 

Constraints:
1 <= text.length <= 104
text consists of lower case English letters only.
*/


class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int b=0,a=0,l=0,o=0,n=0;
        for(int i=0;i<text.length();i++){
            if(text[i]=='b')
                b++;
            else if(text[i]=='a')
                a++;
            else if(text[i]=='l')
                l++;
            else if(text[i]=='o')
                o++;
            else if(text[i]=='n')
                n++;
        }
        int count=0;
        cout<<b<<" "<<a<<" "<<l<<" "<<o<<" "<<n;
        while(b>=1 && a>=1 && l>=2 && o>=2 && n>=1){
            count++;
            b--;
            a--;
            l-=2;
            o-=2;
            n--;
        }
        
        return count;
    }
};
