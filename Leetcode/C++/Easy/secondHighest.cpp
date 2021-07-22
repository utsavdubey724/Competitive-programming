/*
Problem:    1796. Second Largest Digit in a String
Date:       July 22, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Easy
Source:     https://leetcode.com/problems/second-largest-digit-in-a-string/

Question:
Given an alphanumeric string s, return the second largest numerical digit that appears in s, or -1 if it does not exist.
An alphanumeric string is a string consisting of lowercase English letters and digits.


Example 1:
Input: s = "dfa12321afd"
Output: 2
Explanation: The digits that appear in s are [1, 2, 3]. The second largest digit is 2.

Example 2:
Input: s = "abc1111"
Output: -1
Explanation: The digits that appear in s are [1]. There is no second largest digit. 
 

Constraints:
1 <= s.length <= 500
s consists of only lowercase English letters and/or digits.
*/


class Solution {
public:
    int secondHighest(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int n=s.length();
        int max=INT_MIN,smax=INT_MIN;
        for(int i=0;i<n;i++){
            if(isdigit(s[i])){
                int digit=s[i]-'0';
                if(digit>max){
                    smax=max;
                    max=digit;
                }
                else if(digit>smax && digit!=max){
                    smax=digit;
                }
            }
        }
        if(smax!=INT_MIN)
            return smax;
        return -1;
    }
    /*int secondHighest(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int n=s.length();
        priority_queue<int> pq;
        for(int i=0;i<n;i++){
            if(isdigit(s[i])){
                int temp=s[i]-'0';
                pq.push(temp);
            }
        }
        if(pq.size()>1){
            int max=pq.top(),smax=-1;
            while(pq.size()>0 && pq.top()==max){
                pq.pop();
            }
            if(pq.size()>0)
                smax=pq.top();
            return smax;
        }
        return -1;
    }*/
};
