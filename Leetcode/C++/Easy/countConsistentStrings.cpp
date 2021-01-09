 
/*
Problem:    Count the Number of Consistent Strings
Date:       Jan 9, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/count-the-number-of-consistent-strings/

Question:
You are given a string allowed consisting of distinct characters and an array of strings words. A string is consistent if all characters in the string appear 
in the string allowed.
Return the number of consistent strings in the array words.

Example 1:
Input: allowed = "ab", words = ["ad","bd","aaab","baa","badab"]
Output: 2
Explanation: Strings "aaab" and "baa" are consistent since they only contain characters 'a' and 'b'.

Example 2:
Input: allowed = "abc", words = ["a","b","c","ab","ac","bc","abc"]
Output: 7
Explanation: All strings are consistent.

Example 3:
Input: allowed = "cad", words = ["cc","acd","b","ba","bac","bad","ac","d"]
Output: 4
Explanation: Strings "cc", "acd", "ac", and "d" are consistent.
 

Constraints:
1 <= words.length <= 104
1 <= allowed.length <= 26
1 <= words[i].length <= 10
The characters in allowed are distinct.
words[i] and allowed contain only lowercase English letters.
*/

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int> myMap;
        for(int i=0;i<allowed.length();i++)
            myMap[allowed[i]]++;
        
        int count=0;
        for(int i=0;i<words.size();i++){
            string current=words[i];
            int flag=1;
            for(char c: current){
                if(myMap[c])
                    continue;
                else
                    flag=0;
            }
            if(flag==1){
                count++;
                //cout<<current;
            }
        }
        return count;
    }
    /*int countConsistentStrings(string allowed, vector<string>& words) {
        int count=0;
        for(int i=0;i<words.size();i++){
            string current=words[i];
            int flag=1;
            for(int c=0;c<current.length();c++){
                if(allowed.find(current[c]) != string::npos)
                    continue;
                else
                    flag=0;
            }
            if(flag==1){
                count++;
                //cout<<current;
            }
        }
        return count;*/  
};
