/*
Problem:    1957. Delete Characters to Make Fancy String
Date:       August 09, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/delete-characters-to-make-fancy-string/

Question:
A fancy string is a string where no three consecutive characters are equal.
Given a string s, delete the minimum possible number of characters from s to make it fancy.
Return the final string after the deletion. It can be shown that the answer will always be unique.

 
Example 1:
Input: s = "leeetcode"
Output: "leetcode"
Explanation:
Remove an 'e' from the first group of 'e's to create "leetcode".
No three consecutive characters are equal, so return "leetcode".

Example 2:
Input: s = "aaabaaaa"
Output: "aabaa"
Explanation:
Remove an 'a' from the first group of 'a's to create "aabaaaa".
Remove two 'a's from the second group of 'a's to create "aabaa".
No three consecutive characters are equal, so return "aabaa".

Example 3:
Input: s = "aab"
Output: "aab"
Explanation: No three consecutive characters are equal, so return "aab".
 

Constraints:
1 <= s.length <= 10^5
s consists only of lowercase English letters.
*/


class Solution {
public:
    string makeFancyString(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        string res;
        int n;
        for(char c : s){
            n=res.size();
            if(n<2 || res[n-1]!=c || res[n-2]!=c)
                res+=c;
        }
        
        return res;
    }
    /*string makeFancyString(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        int n=s.size();
        int count=1;
        char current=s[0];
        string res;
        res+=current;
        for(int i=1;i<n;i++){
            if(s[i]==current){
                count++;
            }
            else{
                current=s[i];
                count=1;
            }
            if(count<3)
                res+=current;
            else{
                while(s[i]!=current){
                    i++;
                    if(i==n-1)
                        break;
                }
            }
        }
        return res;
    }*/
};
