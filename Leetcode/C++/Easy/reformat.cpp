/*
Problem:    1417. Reformat The String
Date:       August 05, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/reformat-the-string/

Question:
Given alphanumeric string s. (Alphanumeric string is a string consisting of lowercase English letters and digits).
You have to find a permutation of the string where no letter is followed by another letter and no digit is followed by another digit. That is, no two adjacent characters 
have the same type.
Return the reformatted string or return an empty string if it is impossible to reformat the string.

 
Example 1:
Input: s = "a0b1c2"
Output: "0a1b2c"
Explanation: No two adjacent characters have the same type in "0a1b2c". "a0b1c2", "0a1b2c", "0c2a1b" are also valid permutations.

Example 2:
Input: s = "leetcode"
Output: ""
Explanation: "leetcode" has only characters so we cannot separate them by digits.

Example 3:
Input: s = "1229857369"
Output: ""
Explanation: "1229857369" has only digits so we cannot separate them by characters.

Example 4:
Input: s = "covid2019"
Output: "c2o0v1i9d"

Example 5:
Input: s = "ab123"
Output: "1a2b3"
 

Constraints:
1 <= s.length <= 500
s consists of only lowercase English letters and/or digits.
*/


class Solution {
public:
    string reformat(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        string alpha,numeric;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(isalpha(s[i]))
                alpha+=s[i];
            else
                numeric+=s[i];
        }
        cout<<alpha<<" "<<numeric<<endl;
        string ans="";
        int n1=alpha.size();
        int n2=numeric.size();
        if(n1-n2>1 || n2-n1>1){
            return ans;
        }          
        else{
            if(alpha.size()<numeric.size()){
                swap(alpha,numeric);
            }
            int i=0,j=0;
            while(i<alpha.size() && j<numeric.size()){
                ans+=alpha[i++];
                ans+=numeric[j++];
            }
            if(s.size()>ans.size())
                ans+=alpha[i];
        }
        return ans;
    }
};
