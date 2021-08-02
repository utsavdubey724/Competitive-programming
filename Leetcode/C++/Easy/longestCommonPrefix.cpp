/*
Problem:    14. Longest Common Prefix
Date:       August 02, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/longest-common-prefix/

Question:
Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".


Example 1:
Input: strs = ["flower","flow","flight"]
Output: "fl"

Example 2:
Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
 

Constraints:
1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lower-case English letters.
*/


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        ios_base::sync_with_stdio(0);                        
        cin.tie(0);                                          
        cout.tie(0);
        
        int n=strs.size();
        string ans=strs[0];
        for(int i=1;i<n;i++){
            int diff=ans.size()-strs[i].size();
            if(diff>0){
                ans.erase(ans.size()-diff,diff);
            }
            if(ans==strs[i])
                continue;
            for(int j=0;j<ans.size();j++){
                if(ans[j]!=strs[i][j]){
                    ans.erase(j,ans.size()-j);
                }
            }  
        }
        return ans;
    }
    /*string longestCommonPrefix(vector<string>& strs) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        string ans = "";
        int n=strs.size();
        string curr;
        int flag;
        int longest=INT_MAX;
        for(int i=0;i<n;i++){
            if(strs[i].size()<longest)
                longest=strs[i].size();
        }
        //cout<<longest<<endl;
        //cout<<"j\ti\tcurr\tcurr[j]\tstrs[i][j]\n";
        for(int j=0;j<longest;j++){
            flag=1;
            curr=strs[0];
            for(int i=0;i<n;i++){      
                //cout<<j<<"\t"<<i<<"\t"<<curr<<"\t"<<curr[j]<<"\t"<<strs[i][j]<<endl;
                if(strs[i][j] != curr[j]){
                    flag=0;
                    break;
                }                
            }
            if(flag)
                ans+=curr[j];
            else
                break;
            cout<<ans<<endl;
        }
        return ans;
    }*/
};
