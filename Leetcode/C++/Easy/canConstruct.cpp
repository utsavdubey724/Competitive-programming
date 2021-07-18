/*
Problem:    383. Ransom Note
Date:       July 18, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/ransom-note/

Question:
Given two stings ransomNote and magazine, return true if ransomNote can be constructed from magazine and false otherwise.
Each letter in magazine can only be used once in ransomNote.

Example 1:
Input: ransomNote = "a", magazine = "b"
Output: false

Example 2:
Input: ransomNote = "aa", magazine = "ab"
Output: false

Example 3:
Input: ransomNote = "aa", magazine = "aab"
Output: true
 

Constraints:
1 <= ransomNote.length, magazine.length <= 10^5
ransomNote and magazine consist of lowercase English letters.
*/


class Solution {
public:
    bool canConstruct(string ransomNote, string magazine){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        int n1=ransomNote.length();
        vector<int> r(26);
        for(int i=0;i<n1;i++)
            r[ransomNote[i]-'a']++;
        
        int n2=magazine.length();
        vector<int> m(26);
        for(int i=0;i<n2;i++)
            m[magazine[i]-'a']++;
        

        for(int i=0;i<26;i++){
            if(r[i]>m[i])
                return false;
        }
        return true;
    }
    /*bool canConstruct(string ransomNote, string magazine) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int n1=ransomNote.length();
        char curr;
        int flag;
        for(int i=0;i<n1;i++){
            curr=ransomNote[i];
            flag=0;
            for(int j=0;j<magazine.length();j++){
                if(magazine[j]==curr){
                    magazine.erase(j,1);
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                break;
        }
        if(flag)
            return true;
        return false;
    }*/
};
