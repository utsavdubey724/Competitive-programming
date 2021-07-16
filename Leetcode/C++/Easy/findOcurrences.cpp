/*
Problem:    1078. Occurrences After Bigram
Date:       July 16, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/occurrences-after-bigram/

Question:
Given two strings first and second, consider occurrences in some text of the form "first second third", where second comes immediately after first,
and third comes immediately after second.
Return an array of all the words third for each occurrence of "first second third".

Example 1:
Input: text = "alice is a good girl she is a good student", first = "a", second = "good"
Output: ["girl","student"]

Example 2:
Input: text = "we will we will rock you", first = "we", second = "will"
Output: ["we","rock"]
 

Constraints:
1 <= text.length <= 1000
text consists of lowercase English letters and spaces.
All the words in text a separated by a single space.
1 <= first.length, second.length <= 10
first and second consist of lowercase English letters.
*/


class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        vector<string> textcopy;
        int n1=text.length();
        string word;
        for(int i=0,j=i+1;i<n1 && j<n1;i++){
            word="";
            while(text[j]!=' '){
                j++;
                if(j==n1){
                    break;
                }
            }
            while(i<j){
                word+=text[i];
                i++;
            }
            textcopy.push_back(word);
            j++;
        }
        
        vector<string> ans;
        int n2=textcopy.size();
        for(int i=0;i<n2-2;i++){
            if(textcopy[i]==first && textcopy[i+1]==second){
                ans.push_back(textcopy[i+2]);
            }
        }
        
        return ans;
    }
};
