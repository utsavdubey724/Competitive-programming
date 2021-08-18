/*
Problem:    1160. Find Words That Can Be Formed by Characters
Date:       August 18, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/

Question:
You are given an array of strings words and a string chars.
A string is good if it can be formed by characters from chars (each character can only be used once).
Return the sum of lengths of all good strings in words.

 
Example 1:
Input: words = ["cat","bt","hat","tree"], chars = "atach"
Output: 6
Explanation: The strings that can be formed are "cat" and "hat" so the answer is 3 + 3 = 6.

Example 2:
Input: words = ["hello","world","leetcode"], chars = "welldonehoneyr"
Output: 10
Explanation: The strings that can be formed are "hello" and "world" so the answer is 5 + 5 = 10.
 

Constraints:
1 <= words.length <= 1000
1 <= words[i].length, chars.length <= 100
words[i] and chars consist of lowercase English letters.
*/


class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        int res=0;
        int n=chars.size();
        vector<int> charCount(26);
        for(int i=0;i<n;i++){
            charCount[chars[i]-'a']++;
        }
        
        n=words.size();
        string current;
        int flag;;
        for(int i=0;i<n;i++){
            current=words[i];
            vector<int> wordCount(26);
            for(int i=0;i<current.size();i++){
                wordCount[current[i]-'a']++;
            }
            flag=1;
            for(int i=0;i<26;i++){
                if(charCount[i]<wordCount[i]){
                    flag=0;
                    break;
                }
            }
            if(flag)
                res+=current.size();
        }
        
        return res;
    }
};
