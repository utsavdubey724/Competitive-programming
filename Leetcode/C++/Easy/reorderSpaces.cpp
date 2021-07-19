/*
Problem:    1592. Rearrange Spaces Between Words
Date:       July 19, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/rearrange-spaces-between-words/

Question:
You are given a string text of words that are placed among some number of spaces. Each word consists of one or more lowercase English letters and are separated by 
at least one space. It's guaranteed that text contains at least one word.

Rearrange the spaces so that there is an equal number of spaces between every pair of adjacent words and that number is maximized. If you cannot redistribute all 
the spaces equally, place the extra spaces at the end, meaning the returned string should be the same length as text.

Return the string after rearranging the spaces.

Example 1:
Input: text = "  this   is  a sentence "
Output: "this   is   a   sentence"
Explanation: There are a total of 9 spaces and 4 words. We can evenly divide the 9 spaces between the words: 9 / (4-1) = 3 spaces.

Example 2:
Input: text = " practice   makes   perfect"
Output: "practice   makes   perfect "
Explanation: There are a total of 7 spaces and 3 words. 7 / (3-1) = 3 spaces plus 1 extra space. We place this extra space at the end of the string.

Example 3:
Input: text = "hello   world"
Output: "hello   world"

Example 4:
Input: text = "  walks  udp package   into  bar a"
Output: "walks  udp  package  into  bar  a "

Example 5:
Input: text = "a"
Output: "a"
 

Constraints:
1 <= text.length <= 100
text consists of lowercase English letters and ' '.
text contains at least one word.
*/


class Solution {
public:
    string reorderSpaces(string text) {
        int n=text.length();
        int spaceCount=0;
        for(int i=0;i<n;i++){       //spaceCount
            if(text[i]==' '){
                spaceCount++;
            } 
        }
        
        int wordCount=0;            //wordCount and words
        vector<string> words;
        string w;
        for(int i=0;i<n;){
            w="";
            while(i<n && text[i]==' ')
                i++;
            while(i<n && text[i]!=' '){
                w+=text[i];
                i++;
            }
            if(w!="")
                words.push_back(w);
        }
        wordCount=words.size();
        
        for(int i=0;i<words.size();i++)
            cout<<words[i]<<" ";
        cout<<endl;
        
        int maxSpace=0,lastSpace=0;         //maxSpace and lastSpace
        if(wordCount>1){
            maxSpace=spaceCount/(wordCount-1);
            lastSpace=spaceCount%(wordCount-1);
        }
        else{
            lastSpace=spaceCount;
        }
        cout<<wordCount<<" "<<spaceCount<<" "<<lastSpace<<endl;
        
        string ans;
        int temp;
        int times=words.size()-1;
        for(int i=0,j=0;i<n,j<words.size();){
            temp=maxSpace;
            ans+=words[j];
            i+=words[j].length();
            j++;
            while(temp!=0){
                if(times==0)
                    break;
                ans+=' ';
                temp--;
                i++;
            }
            times--;
        }
        temp=lastSpace;
        while(temp!=0){
            ans+=' ';
            temp--;
        }
        
        return ans;
    }
};
