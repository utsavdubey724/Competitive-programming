/*
Problem:    1455. Check If a Word Occurs As a Prefix of Any Word in a Sentence
Date:       July 15, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/check-if-a-word-occurs-as-a-prefix-of-any-word-in-a-sentence/

Question:
Given a sentence that consists of some words separated by a single space, and a searchWord.
You have to check if searchWord is a prefix of any word in sentence.
Return the index of the word in sentence where searchWord is a prefix of this word (1-indexed).
If searchWord is a prefix of more than one word, return the index of the first word (minimum index). If there is no such word return -1.
A prefix of a string S is any leading contiguous substring of S.

Example 1:
Input: sentence = "i love eating burger", searchWord = "burg"
Output: 4
Explanation: "burg" is prefix of "burger" which is the 4th word in the sentence.

Example 2:
Input: sentence = "this problem is an easy problem", searchWord = "pro"
Output: 2
Explanation: "pro" is prefix of "problem" which is the 2nd and the 6th word in the sentence, but we return 2 as it's the minimal index.

Example 3:
Input: sentence = "i am tired", searchWord = "you"
Output: -1
Explanation: "you" is not a prefix of any word in the sentence.

Example 4:
Input: sentence = "i use triple pillow", searchWord = "pill"
Output: 4

Example 5:
Input: sentence = "hello from the other side", searchWord = "they"
Output: -1
 

Constraints:
1 <= sentence.length <= 100
1 <= searchWord.length <= 10
sentence consists of lowercase English letters and spaces.
searchWord consists of lowercase English letters.
*/


class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int flag=0,ans,again=1,found=-1;
        while(again){
            again=0;
            if(found==-1)
                found = sentence.find(searchWord);
            else
                found = sentence.find(searchWord,found+1);
            cout<<found<<" ";
            if(found!=string::npos){
                if(found==0){
                    flag=1;
                    ans=1;
                }
                else if(sentence[found-1]== ' '){
                    flag=1;
                    int count=0;
                    for(int i=0;i<found;i++)
                        if(sentence[i]==' ')
                            count++;
                    ans=count+1;
                }     
                else if(isalpha(sentence[found-1])){
                    again=1;
                }                  
            }
        }
        if(flag)
            return ans;
        return -1;
    }
};
