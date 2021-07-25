/*
Problem:    520. Detect Capital
Date:       July 25, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/detect-capital/

Question:
We define the usage of capitals in a word to be right when one of the following cases holds:

All letters in this word are capitals, like "USA".
All letters in this word are not capitals, like "leetcode".
Only the first letter in this word is capital, like "Google".
Given a string word, return true if the usage of capitals in it is right.


Example 1:
Input: word = "USA"
Output: true

Example 2:
Input: word = "FlaG"
Output: false
 

Constraints:
1 <= word.length <= 100
word consists of lowercase and uppercase English letters.
*/


class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.length();
        int flag=1;
        if(islower(word[0])){
            for(int i=0;i<n;i++){
                if(isupper(word[i])){
                    flag=0;
                    break;
                }
            }
        }
        else{
            if(flag!=0 && n>1){
                if(isupper(word[1])){
                    for(int i=2;i<n;i++){
                        if(islower(word[i])){
                            flag=0;
                            break;
                        }
                    }
                }
                else{
                    for(int i=1;i<n;i++){
                        if(isupper(word[i])){
                            flag=0;
                            break;
                        }
                    }
                }        
            }
        }
        if(flag)
            return true;
        return false;
    }
};
