/*
Problem:    1023. Camelcase Matching
Date:       August 19, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Medium
Source:     https://leetcode.com/problems/camelcase-matching/


Question:
Given an array of strings queries and a string pattern, return a boolean array answer where answer[i] is true if queries[i] matches pattern, and false otherwise.

A query word queries[i] matches pattern if you can insert lowercase English letters pattern so that it equals the query. You may insert each character at any position 
and you may not insert any characters.


Example 1:
Input: queries = ["FooBar","FooBarTest","FootBall","FrameBuffer","ForceFeedBack"], pattern = "FB"
Output: [true,false,true,true,false]
Explanation: "FooBar" can be generated like this "F" + "oo" + "B" + "ar".
"FootBall" can be generated like this "F" + "oot" + "B" + "all".
"FrameBuffer" can be generated like this "F" + "rame" + "B" + "uffer".

Example 2:
Input: queries = ["FooBar","FooBarTest","FootBall","FrameBuffer","ForceFeedBack"], pattern = "FoBa"
Output: [true,false,true,false,false]
Explanation: "FooBar" can be generated like this "Fo" + "o" + "Ba" + "r".
"FootBall" can be generated like this "Fo" + "ot" + "Ba" + "ll".

Example 3:
Input: queries = ["FooBar","FooBarTest","FootBall","FrameBuffer","ForceFeedBack"], pattern = "FoBaT"
Output: [false,true,false,false,false]
Explanation: "FooBarTest" can be generated like this "Fo" + "o" + "Ba" + "r" + "T" + "est".
 

Constraints:
1 <= pattern.length, queries.length <= 100
1 <= queries[i].length <= 100
queries[i] and pattern consist of English letters.
*/


class Solution {
public:
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        int n = pattern.size();
        unordered_map<char,int> pmap;
        for(int i=0;i<pattern.size();i++)
            pmap[pattern[i]]++;
        
        n = queries.size();
        vector<bool> res;
        string current;
        int flag;
        for(int i=0;i<n;i++){
            current = queries[i];
            flag = 1;
            unordered_map<char,int> qmap;
            for(int j=0;j<current.size();j++){
                qmap[current[j]]++;
            }

            //Checking if a uppercase letter exists in current and not in pattern with same count
            for(auto it : qmap){                        
                if(isupper(it.first)){                  
                    if(pmap.find(it.first) == pmap.end() || pmap[it.first] != qmap[it.first]){
                        flag = 0;
                        break;
                    }
                }    
            }
            
            //Checking if a character exists in pattern and not in current with same count
            for(auto it : pmap){                                  
                if(qmap.find(it.first) == qmap.end()) { 
                    flag = 0;
                    break;
                }                    
            }
            
            //Check order of alphabets
            int prevIdx=0,flag2;
            for(int j=0;j<pattern.size();j++){
                flag2 = 1;
                for(int k=prevIdx;k<current.size();k++){
                    if(current[k]==pattern[j]){
                        prevIdx=k+1;
                        flag2 = 0;
                        break;
                    }
                }
                if(flag2 == 1){
                    flag = 0;
                    break;
                }
            }
            
            if(flag)
                res.emplace_back(true);
            else
                res.emplace_back(false);
        }
        
        return res;
    }
};
