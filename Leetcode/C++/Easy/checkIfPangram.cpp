/*
Problem:    1832. Check if the Sentence Is Pangram
Date:       July 13, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/check-if-the-sentence-is-pangram/

Question:
A pangram is a sentence where every letter of the English alphabet appears at least once.
Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.

Example 1:
Input: sentence = "thequickbrownfoxjumpsoverthelazydog"
Output: true
Explanation: sentence contains at least one of every letter of the English alphabet.

Example 2:
Input: sentence = "leetcode"
Output: false
 

Constraints:
1 <= sentence.length <= 1000
sentence consists of lowercase English letters.
*/


class Solution {
public:
    bool checkIfPangram(string sentence) {      //Using vector only (Optimal)
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        vector<int> v(26,0);
        for(char c : sentence)
            v[c-'a']++;
        for(int i : v)
            if(i<1)
                return false;
        return true;
    }
    
    /*bool checkIfPangram(string sentence) {    //Using Set
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        set<char> mySet;
        for(char c : sentence)
            mySet.insert(c);
        return mySet.size()==26;
    }*/
};
