/*
Problem:    1370. Increasing Decreasing String
Date:       August 18, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/increasing-decreasing-string/

Question:
Given a string s. You should re-order the string using the following algorithm:

Pick the smallest character from s and append it to the result.
Pick the smallest character from s which is greater than the last appended character to the result and append it.
Repeat step 2 until you cannot pick more characters.
Pick the largest character from s and append it to the result.
Pick the largest character from s which is smaller than the last appended character to the result and append it.
Repeat step 5 until you cannot pick more characters.
Repeat the steps from 1 to 6 until you pick all characters from s.
In each step, If the smallest or the largest character appears more than once you can choose any occurrence and append it to the result.

Return the result string after sorting s with this algorithm.


Example 1:
Input: s = "aaaabbbbcccc"
Output: "abccbaabccba"
Explanation: After steps 1, 2 and 3 of the first iteration, result = "abc"
After steps 4, 5 and 6 of the first iteration, result = "abccba"
First iteration is done. Now s = "aabbcc" and we go back to step 1
After steps 1, 2 and 3 of the second iteration, result = "abccbaabc"
After steps 4, 5 and 6 of the second iteration, result = "abccbaabccba"

Example 2:
Input: s = "rat"
Output: "art"
Explanation: The word "rat" becomes "art" after re-ordering it with the mentioned algorithm.

Example 3:
Input: s = "leetcode"
Output: "cdelotee"

Example 4:
Input: s = "ggggggg"
Output: "ggggggg"

Example 5:
Input: s = "spo"
Output: "ops"
 

Constraints:
1 <= s.length <= 500
s contains only lower-case English letters.
*/


class Solution {
public:
    string sortString(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        string res;
        int n = s.size();
        vector<int> freq(26);
        for(int i = 0;i < n;i++){
            freq[s[i]-'a']++;
        }
        
        /*char c;
        for(int i=0;i<26;i++){
            c = i+'a';
            cout<<c<<":";
            cout<<freq[i]<<" ";
        }
        cout<<endl;*/
        int flag = 1;
        char prev;
        while(flag){
            flag=0;
            prev = '1';
            for(int i = 0;i < 26;i++){
                if(freq[i] != 0 && i+'a' != prev){
                    res += i+'a';
                    prev = i+'a';
                    freq[i]--;
                    flag = 1;
                }     
            }
            prev = '1';
            for(int i = 25;i >= 0;i--){
                if(freq[i] != 0 && i+'a' != prev){
                    res += i+'a';
                    prev = i+'a';
                    freq[i]--;
                    flag = 1;
                }   
            }
        }
        return res;
    }
    /*string sortString(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        sort(s.begin(), s.end());
        string res;
        char prev;
        while(s.size() != 0){
            prev = '0';
            for(int i = 0;i < s.size();){
                while(i < s.size() && s[i] == prev)
                    i++;
                if(i == s.size())
                    break;
                res += s[i];
                prev = s[i];
                s.erase(i,1);
            }
            prev = '0';
            for(int j = s.size()-1;j >= 0;){
                while(j >= 0 && s[j] == prev)
                    j--;
                if(j < 0)
                    break;
                res += s[j];
                prev = s[j];
                s.erase(j,1);
                j--;
            }
        }
        return res;
    }*/
};
