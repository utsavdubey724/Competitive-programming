/*
Problem:    1859. Sorting the Sentence
Date:       July 15, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/sorting-the-sentence/

Question:
A sentence is a list of words that are separated by a single space with no leading or trailing spaces. Each word consists of lowercase and uppercase English letters.
A sentence can be shuffled by appending the 1-indexed word position to each word then rearranging the words in the sentence
For example, the sentence "This is a sentence" can be shuffled as "sentence4 a3 is2 This1" or "is2 sentence4 This1 a3".
Given a shuffled sentence s containing no more than 9 words, reconstruct and return the original sentence.

Example 1:
Input: s = "is2 sentence4 This1 a3"
Output: "This is a sentence"
Explanation: Sort the words in s to their original positions "This1 is2 a3 sentence4", then remove the numbers.

Example 2:
Input: s = "Myself2 Me1 I4 and3"
Output: "Me Myself and I"
Explanation: Sort the words in s to their original positions "Me1 Myself2 and3 I4", then remove the numbers.
 

Constraints:
2 <= s.length <= 200
s consists of lowercase and uppercase English letters, spaces, and digits from 1 to 9.
The number of words in s is between 1 and 9.
The words in s are separated by a single space.
s contains no leading or trailing spaces.
*/


class Solution {
public:
    string sortSentence(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        string orig="";
        int count=1;
        int left,right;
        int n=s.length();
        for(int i=0;i<n;i++)
            if(s[i]==' ')
                count++;
        int idx=1;
        while(count--){
            for(int i=0;i<n;i++){
                if(idx == s[i]-'0'){
                    right=i-1;
                    
                    while(s[i]!=' ' && i>0){
                        i--;
                    }
                    if(i==0)
                        left=i;
                    else
                        left=i+1;
                    break;
                }
            }
            //cout<<left<<" "<<right<<endl;
            for(int i=left;i<=right;i++)
                orig+=s[i];
            if(count!=0)
                orig+=' ';
            idx++;
        }
        return orig;
    }
};
