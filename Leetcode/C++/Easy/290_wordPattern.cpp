/*
Problem:    290. Word Pattern
Date:       August 03, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/word-pattern/

Question:
Given a pattern and a string s, find if s follows the same pattern.
Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in s.


Example 1:
Input: pattern = "abba", s = "dog cat cat dog"
Output: true

Example 2:
Input: pattern = "abba", s = "dog cat cat fish"
Output: false

Example 3:
Input: pattern = "aaaa", s = "dog cat cat dog"
Output: false

Example 4:
Input: pattern = "abba", s = "dog dog dog dog"
Output: false
 

Constraints:
1 <= pattern.length <= 300
pattern contains only lower-case English letters.
1 <= s.length <= 3000
s contains only lower-case English letters and spaces ' '.
s does not contain any leading or trailing spaces.
All the words in s are separated by a single space.
*/


class Solution {
public:  
    bool wordPattern(string pattern, string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        vector<string> words;
        string w;
        for(char c : s){
            if(c != ' '){
                w+=c;
            }
            else{
                words.emplace_back(w);
                w="";
            }
        }
        words.emplace_back(w);
        /*for(string s1 : words)
            cout<<s1<<" ";
        cout<<endl;*/
        
        if(pattern.size() != words.size())
            return false;
        
        bool res=true;
        unordered_map<char,string> myMap;
        int n=pattern.size();
        for(int i=0;i<n;i++){
            if(myMap[pattern[i]]==words[i])
                continue;
            if(myMap[pattern[i]]!=""){
                res=false;
                break;
            }
            myMap[pattern[i]]=words[i];
        }
        
        set<string> mySet;
        for(int i=0;i<n;i++){
            w=myMap[pattern[i]];
            mySet.insert(w);
        }
        if(mySet.size()!=myMap.size())
            res=false;
        
        return res;
    }
};
