/*
Problem:    1935. Maximum Number of Words You Can Type
Date:       July 18, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/maximum-number-of-words-you-can-type/

Question:
There is a malfunctioning keyboard where some letter keys do not work. All other keys on the keyboard work properly.
Given a string text of words separated by a single space (no leading or trailing spaces) and a string brokenLetters of all distinct letter keys that are broken, 
return the number of words in text you can fully type using this keyboard.

Example 1:
Input: text = "hello world", brokenLetters = "ad"
Output: 1
Explanation: We cannot type "world" because the 'd' key is broken.

Example 2:
Input: text = "leet code", brokenLetters = "lt"
Output: 1
Explanation: We cannot type "leet" because the 'l' and 't' keys are broken.

Example 3:
Input: text = "leet code", brokenLetters = "e"
Output: 0
Explanation: We cannot type either word because the 'e' key is broken.
 

Constraints:
1 <= text.length <= 10^4
0 <= brokenLetters.length <= 26
text consists of words separated by a single space without any leading or trailing spaces.
Each word only consists of lowercase English letters.
brokenLetters consists of distinct lowercase English letters.
*/


class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int count=0;
        vector<string> v;
        int n=text.length();
        string word;
        for(int i=0,j=0;i<n;){
            word="";
            while(j<n && text[j]!=' '){
                j++;
            }
            while(i<j){
                word+=text[i];
                i++;
            }
            v.push_back(word);
            j++;
            i=j;
        }
        int flag;
        for(int i=0;i<v.size();i++){
            word=v[i];
            flag=1;
            for(int j=0;j<brokenLetters.length();j++){
                for(int k=0;k<word.length();k++){
                    if(word[k]==brokenLetters[j]){
                        flag=0;
                        break;
                    }
                }
                if(flag==0)
                    break;
            }
            if(flag)
                count++;
        }
        return count;
    }
};
