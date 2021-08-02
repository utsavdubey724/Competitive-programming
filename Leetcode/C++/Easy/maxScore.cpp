/*
Problem:    1422. Maximum Score After Splitting a String
Date:       August 02, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/maximum-score-after-splitting-a-string/

Question:
Given a string s of zeros and ones, return the maximum score after splitting the string into two non-empty substrings (i.e. left substring and right substring).
The score after splitting a string is the number of zeros in the left substring plus the number of ones in the right substring.

 
Example 1:
Input: s = "011101"
Output: 5 
Explanation: 
All possible ways of splitting s into two non-empty substrings are:
left = "0" and right = "11101", score = 1 + 4 = 5 
left = "01" and right = "1101", score = 1 + 3 = 4 
left = "011" and right = "101", score = 1 + 2 = 3 
left = "0111" and right = "01", score = 1 + 1 = 2 
left = "01110" and right = "1", score = 2 + 1 = 3

Example 2:
Input: s = "00111"
Output: 5
Explanation: When left = "00" and right = "111", we get the maximum score = 2 + 3 = 5

Example 3:
Input: s = "1111"
Output: 3
 

Constraints:
2 <= s.length <= 500
The string s consists of characters '0' and '1' only.
*/


class Solution {
public:
    int maxScore(string s) {                      //Time Complexity: O(n)
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        int leftScore,rightScore,currentScore=0,maxScore=0;
        int i=1,n=s.size();
        leftScore=count(s.begin(),s.begin()+i,'0');
        rightScore=count(s.begin()+i,s.end(),'1');
        currentScore=leftScore+rightScore;
        maxScore=currentScore;
        while(i!=n-1){
            if(s[i]=='1'){
                currentScore--;
            }
            else{
                currentScore++;
            }
            if(currentScore>maxScore)
                maxScore=currentScore;
            i++;
        }
        return maxScore;
    }
    /*int maxScore(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        int n=s.size(),left=0;     //(left,right)
        string s1,s2;
        int currentScore=0,maxScore=0;
        int leftScore,rightScore;
        while(1){
            s1="";
            s2="";
            for(int i=0;left<n && i<=left;i++){
                s1+=s[i];
            }
            for(int i=left+1;i<n;i++){
                s2+=s[i];
            }
            //cout<<s1<<" "<<s2<<endl;
            leftScore=count(s1.begin(),s1.end(),'0');
            rightScore=count(s2.begin(),s2.end(),'1');
            currentScore=leftScore+rightScore;
            maxScore=max(maxScore,currentScore);
            left++;
            if(left==n-1)
                break;
        }
        return maxScore;
    }*/
};
