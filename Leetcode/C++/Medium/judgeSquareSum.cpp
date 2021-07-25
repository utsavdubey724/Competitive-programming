/*
Problem:    633. Sum of Square Numbers
Date:       July 25, 2021
Author:     Utsav Dubey, utsav_201700433@smit.smu.edu.in
Difficulty: Medium
Source:     https://leetcode.com/problems/sum-of-square-numbers/

Question:
Given a non-negative integer c, decide whether there're two integers a and b such that a^2 + b^2 = c.

Example 1:
Input: c = 5
Output: true
Explanation: 1 * 1 + 2 * 2 = 5

Example 2:
Input: c = 3
Output: false

Example 3:
Input: c = 4
Output: true

Example 4:
Input: c = 2
Output: true

Example 5:
Input: c = 1
Output: true
 

Constraints:
0 <= c <= 2^31 - 1
*/


class Solution {
public:
    bool judgeSquareSum(int c){
        int a,b;
        for(int i=0;i<=sqrt(c);i++){
            a=i*i;
            b=sqrt(c-a);
            if(b*b==c-a){
                return true;
            }
        }
        return false;
    }
    /*bool judgeSquareSum(int c){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        unordered_map<int,bool> myMap;
        for(int i=0;i<=sqrt(c);i++){
            myMap[i*i]=true;
        }
        int a,b,flag=0;
        for(auto it : myMap){
            a=it.first;
            b=c-a;
            if(myMap.find(b) != myMap.end()){
                flag=1;
                break;
            }
        }
        if(flag)
            return true;
        return false;
    }*/
};
