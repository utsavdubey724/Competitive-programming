/*
Problem:    500. Keyboard Row
Date:       August 18, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/keyboard-row/

Question:
Given an array of strings words, return the words that can be typed using letters of the alphabet on only one row of American keyboard like the image below.

In the American keyboard:
the first row consists of the characters "qwertyuiop",
the second row consists of the characters "asdfghjkl", and
the third row consists of the characters "zxcvbnm".

 
Example 1:
Input: words = ["Hello","Alaska","Dad","Peace"]
Output: ["Alaska","Dad"]

Example 2:
Input: words = ["omk"]
Output: []

Example 3:
Input: words = ["adsdf","sfd"]
Output: ["adsdf","sfd"]
 

Constraints:
1 <= words.length <= 20
1 <= words[i].length <= 100
words[i] consists of English letters (both lowercase and uppercase). 
*/


class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> res;
        int n=words.size();
        string row1="qwertyuiop",row2="asdfghjkl",row3="zxcvbnm";
        int flag,rflag1,rflag2,rflag3;          //rflag1,rflag2,rflag3 will be 1 if a character from
        string current;                         //current word occur in row1,row2,row3 respectively.
        for(int i=0;i<n;i++){
            current=words[i];
            flag=1;
            rflag1=0,rflag2=0,rflag3=0;
            for(int j=0;j<current.size();j++){
                if(row1.find(current[j]) != string::npos){
                    rflag1=1;
                }
                else if(row2.find(current[j]) != string::npos){
                    rflag2=1;
                }
                else if(row3.find(current[j]) != string::npos){
                    rflag3=1;
                }
            }
            //cout<<rflag1<<" "<<rflag2<<" "<<rflag3<<endl;
            if((rflag1 == rflag2 && rflag1 == 1) || (rflag1 == rflag3 && rflag3 == 1) || (rflag2 == rflag3 && rflag2 == 1))
                flag=0;
            if(flag)
                res.emplace_back(current);
        }
        cout<<endl;
        return res;
    }
};
