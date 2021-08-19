/*
Problem:    884. Uncommon Words from Two Sentences
Date:       August 18, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/uncommon-words-from-two-sentences/

Question:
A sentence is a string of single-space separated words where each word consists only of lowercase letters.
A word is uncommon if it appears exactly once in one of the sentences, and does not appear in the other sentence.
Given two sentences s1 and s2, return a list of all the uncommon words. You may return the answer in any order.

 
Example 1:
Input: s1 = "this apple is sweet", s2 = "this apple is sour"
Output: ["sweet","sour"]

Example 2:
Input: s1 = "apple apple", s2 = "banana"
Output: ["banana"]
 

Constraints:
1 <= s1.length, s2.length <= 200
s1 and s2 consist of lowercase English letters and spaces.
s1 and s2 do not have leading or trailing spaces.
All the words in s1 and s2 are separated by a single space.
*/


class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> words1;                  //Stores each word from s1
        string current;
        for(char c : s1){
            if(c != ' '){
                current+=c;
            }
            else{
                words1.emplace_back(current);
                current = "";
            }
        }
        if(current != "")
            words1.emplace_back(current);
        
        vector<string> words2;                  //Stores each word from s2
        current = "";
        for(char c : s2){
            if(c != ' '){
                current+=c;
            }
            else{
                words2.emplace_back(current);
                current = "";
            }
        }
        if(current != "")
            words2.emplace_back(current);
       
        int n1=words1.size();
        unordered_map<string,int> myMap1;       //Frequency of each word in words1
        for(int i=0;i<n1;i++)
            myMap1[words1[i]]++;
        
        int n2=words2.size();
        unordered_map<string,int> myMap2;       //Frequency of each word in words2
        for(int i=0;i<n2;i++)
            myMap2[words2[i]]++;
        
        vector<string> res;                     
        for(auto it : myMap1){                  //Finding Uncommon strings in myMap1
            if(it.second == 1){
                if(myMap2.find(it.first) == myMap2.end())
                    res.emplace_back(it.first);
            }
        }
        
        for(auto it : myMap2){                  //Finding Uncommon strings in myMap2
            if(it.second == 1){
                if(myMap1.find(it.first) == myMap2.end())
                    res.emplace_back(it.first);
            }
        }
        
        return res;
    }
};
