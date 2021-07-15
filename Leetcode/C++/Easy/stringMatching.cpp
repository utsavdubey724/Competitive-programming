/*
Problem:    1408. String Matching in an Array
Date:       July 15, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/string-matching-in-an-array/

Question:
Given an array of string words. Return all strings in words which is substring of another word in any order. 
String words[i] is substring of words[j], if can be obtained removing some characters to left and/or right side of words[j].

Example 1:
Input: words = ["mass","as","hero","superhero"]
Output: ["as","hero"]
Explanation: "as" is substring of "mass" and "hero" is substring of "superhero".
["hero","as"] is also a valid answer.

Example 2:
Input: words = ["leetcode","et","code"]
Output: ["et","code"]
Explanation: "et", "code" are substring of "leetcode".

Example 3:
Input: words = ["blue","green","bu"]
Output: []
 

Constraints:
1 <= words.length <= 100
1 <= words[i].length <= 30
words[i] contains only lowercase English letters.
It's guaranteed that words[i] will be unique.
*/


class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        ios_base::sync_with_stdio(0);
        cin.tie();
        vector<string> ans;
        int n=words.size();
        for(int i=0;i<n;i++){
            string temp=words[i];
            words[i]="";
            for(int j=0;j<n;j++){
                string curr=words[j];
                size_t found=curr.find(temp);
                if(found != string::npos){
                    ans.push_back(temp);
                    break;
                }
            }
            words[i]=temp;
        }
        return ans;
    }
};
