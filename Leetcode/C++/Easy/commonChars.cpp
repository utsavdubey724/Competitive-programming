/*
Problem:    1002. Find Common Characters
Date:       July 26, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/find-common-characters/

Question:
Given an array words of strings made only from lowercase letters, return a list of all characters that show up in all strings within the list (including duplicates).  
For example, if a character occurs 3 times in all strings but not 4 times, you need to include that character three times in the final answer.
You may return the answer in any order.

Example 1:
Input: ["bella","label","roller"]
Output: ["e","l","l"]

Example 2:
Input: ["cool","lock","cook"]
Output: ["c","o"]
 

Note:
1 <= words.length <= 100
1 <= words[i].length <= 100
words[i] consists of lowercase English letters.
*/


class Solution {
public:
    vector<string> commonChars(vector<string>& words){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        vector<int> common(26,INT_MAX);        
        int n=words.size();
        string current;

        for(int i=0;i<n;i++){
            vector<int> count(26,0);
            current=words[i];
            for(char c : current){
                count[c-'a']++;
            }
            for(int i=0;i<26;i++){
                common[i]=min(common[i],count[i]);
            }
        }
        
        vector<string> ans;
        for(int i=0;i<26;){
            while(common[i]>0){
                current="";
                char c=i+'a';
                current+=c;
                ans.push_back(current);
                common[i]--;
            }
            i++;
        }
        
        return ans;
    }
    /*vector<string> commonChars(vector<string>& words) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        int n=words[0].length();
        vector<string> ans;
        int flag;
        for(int i=0;i<n;i++){
            char currChar=words[0][i];
            for(int j=1;j<words.size();j++){
                string currString=words[j];
                flag=0;
                for(int k=0;k<currString.length();k++){
                    if(currChar==currString[k]){
                        //cout<<words[j]<<" ";
                        words[j].erase(k,1);
                        //cout<<words[j]<<"\n";
                        flag=1;
                        if(j==words.size()-1)
                            flag=2;
                        break;
                    }
                }
                if(flag==0){
                    break;
                }
                if(flag==1){
                    flag=0;
                }
            }
            //cout<<endl;
            if(flag==2){
                string temp;
                temp+=currChar;
                ans.push_back(temp);
            }
        }
        return ans;
    }*/
};
