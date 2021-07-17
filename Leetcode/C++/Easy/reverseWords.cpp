/*
Problem:    557. Reverse Words in a String III
Date:       July 17, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/reverse-words-in-a-string-iii/

Question:
Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

Example 1:
Input: s = "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"

Example 2:
Input: s = "God Ding"
Output: "doG gniD"
 

Constraints:
1 <= s.length <= 5 * 10^4
s contains printable ASCII characters.
s does not contain any leading or trailing spaces.
There is at least one word in s.
All the words in s are separated by a single space.
*/


class Solution {
public:
    string reverseWords(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int n=s.length();
        //cout<<"i\t"<<"j"<<endl;
        for(int i=0,j=1;i<n && j<n;){
            while(j<n && s[j]!=' '){
                j++;
            }
            //cout<<i<<"\t"<<j<<endl;
            reverse(s.begin()+i,s.begin()+j);
            i=j+1;
            j=i+1;
            //cout<<s<<endl;
        }
        return s;
    }
};
